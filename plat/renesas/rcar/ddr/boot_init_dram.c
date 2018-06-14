/*
 * Copyright (c) 2015-2017, Renesas Electronics Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   - Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *   - Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 *   - Neither the name of Renesas nor the names of its contributors may be
 *     used to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <stdint.h>
#include <debug.h>
#include <mmio.h>
#include "boot_init_dram.h"
#include "D3/boot_init_dram_d3.h"

 /* Product Register */
#define PRR			(0xFFF00044U)
#define PRR_PRODUCT_MASK	(0x00007F00U)
#define PRR_CUT_MASK		(0x000000FFU)
#define PRR_PRODUCT_H3		(0x00004F00U)           /* R-Car H3 */
#define PRR_PRODUCT_M3		(0x00005200U)           /* R-Car M3 */
#define PRR_PRODUCT_D3		(0x00005800U)           /* R-Car D3 */
#define PRR_PRODUCT_10		(0x00U)
#define PRR_PRODUCT_11		(0x01U)

#define	RST_MODEMR	(0xE6160060)
#define	MODEMR_MD19		(0x00080000U)	/* MD19 bit mask */

#define PRR_PRODUCT_ERR(reg)	do{\
				ERROR("LSI Product ID(PRR=0x%x) DDR "\
				"initialize not supported.\n",reg);\
				panic();\
				}while(0)
#define PRR_CUT_ERR(reg)	do{\
				ERROR("LSI Cut ID(PRR=0x%x) DDR "\
				"initialize not supported.\n",reg);\
				panic();\
				}while(0)

int32_t InitDram(void)
{
	uint32_t reg;
	uint32_t ddr_mbps;
	int32_t  ret = 0;

	reg = mmio_read_32(PRR);
#if RCAR_LSI == RCAR_D3	/* D3 */
	if (PRR_PRODUCT_D3 != (reg & PRR_PRODUCT_MASK)) {
		PRR_PRODUCT_ERR(reg);
	}
	reg = mmio_read_32(RST_MODEMR);
	if(MODEMR_MD19 == (reg & MODEMR_MD19)){
		ret = init_ddr_d31866();
		ddr_mbps = 1866;
	}
	else{
		ret = init_ddr_d31600();
		ddr_mbps = 1600;
	}
	if(ret != 1){
		ret = 1;
	}
	NOTICE("BL2: DDR%d\n", ddr_mbps);
	
#else
  #error "Don't have DDR initialize routine."
#endif
	return 0;
}
