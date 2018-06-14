#
# Copyright (c) 2015-2018, Renesas Electronics Corporation. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause
#

ifeq (${RCAR_LSI},${RCAR_D3})
  BL2_SOURCES += plat/renesas/rcar/ddr/D3/ddr_init_d3.c
  BL2_SOURCES += plat/renesas/rcar/ddr/boot_init_dram.c
else
  ifeq (${RCAR_LSI},${RCAR_E3})
      include plat/renesas/rcar/ddr/ddr_a/ddr_a.mk
  else
      include plat/renesas/rcar/ddr/ddr_b/ddr_b.mk
  endif

  BL2_SOURCES += plat/renesas/rcar/ddr/dram_sub_func.c
endif
