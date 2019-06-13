/*
 * Copyright (c) 2015-2019, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#if RCAR_QOS_TYPE  == RCAR_QOS_TYPE_DEFAULT
static const mstat_slot_t mstat_fix[] = {
	{0x0000U, 0x0000000000000000UL},
	{0x0008U, 0x0000000000000000UL},
	{0x0010U, 0x0000000000000000UL},
	{0x0018U, 0x0000000000000000UL},
	{0x0020U, 0x0000000000000000UL},
	{0x0028U, 0x0000000000000000UL},
	{0x0030U, 0x001004030000FFFFUL},
	{0x0038U, 0x001004030000FFFFUL},
	{0x0040U, 0x001414090000FFFFUL},
	{0x0048U, 0x0000000000000000UL},
	{0x0050U, 0x001410010000FFFFUL},
	{0x0058U, 0x00140C090000FFFFUL},
	{0x0060U, 0x00140C090000FFFFUL},
	{0x0068U, 0x0000000000000000UL},
	{0x0070U, 0x001410010000FFFFUL},
	{0x0078U, 0x001004020000FFFFUL},
	{0x0080U, 0x0000000000000000UL},
	{0x0088U, 0x001414090000FFFFUL},
	{0x0090U, 0x001408060000FFFFUL},
	{0x0098U, 0x0000000000000000UL},
	{0x00A0U, 0x000C08020000FFFFUL},
	{0x00A8U, 0x000C04010000FFFFUL},
	{0x00B0U, 0x000C04010000FFFFUL},
	{0x00B8U, 0x0000000000000000UL},
	{0x00C0U, 0x000C08020000FFFFUL},
	{0x00C8U, 0x000C04010000FFFFUL},
	{0x00D0U, 0x000C04010000FFFFUL},
	{0x00D8U, 0x000C04030000FFFFUL},
	{0x00E0U, 0x000C100F0000FFFFUL},
	{0x00E8U, 0x0000000000000000UL},
	{0x00F0U, 0x001010080000FFFFUL},
	{0x00F8U, 0x0000000000000000UL},
	{0x0100U, 0x0000000000000000UL},
	{0x0108U, 0x0000000000000000UL},
	{0x0110U, 0x001010080000FFFFUL},
	{0x0118U, 0x0000000000000000UL},
	{0x0120U, 0x0000000000000000UL},
	{0x0128U, 0x0000000000000000UL},
	{0x0130U, 0x0000000000000000UL},
	{0x0138U, 0x00100C0A0000FFFFUL},
	{0x0140U, 0x0000000000000000UL},
	{0x0148U, 0x0000000000000000UL},
	{0x0150U, 0x00100C0A0000FFFFUL},
	{0x0158U, 0x0000000000000000UL},
	{0x0160U, 0x00100C0A0000FFFFUL},
	{0x0168U, 0x0000000000000000UL},
	{0x0170U, 0x0000000000000000UL},
	{0x0178U, 0x001008050000FFFFUL},
	{0x0180U, 0x0000000000000000UL},
	{0x0188U, 0x0000000000000000UL},
	{0x0190U, 0x001028280000FFFFUL},
	{0x0198U, 0x0000000000000000UL},
	{0x01A0U, 0x00100C0A0000FFFFUL},
	{0x01A8U, 0x0000000000000000UL},
	{0x01B0U, 0x0000000000000000UL},
	{0x01B8U, 0x0000000000000000UL},
	{0x01C0U, 0x0000000000000000UL},
	{0x01C8U, 0x0000000000000000UL},
	{0x01D0U, 0x0000000000000000UL},
	{0x01D8U, 0x0000000000000000UL},
	{0x01E0U, 0x0000000000000000UL},
	{0x01E8U, 0x0000000000000000UL},
	{0x01F0U, 0x0000000000000000UL},
	{0x01F8U, 0x0000000000000000UL},
	{0x0200U, 0x0000000000000000UL},
	{0x0208U, 0x0000000000000000UL},
	{0x0210U, 0x0000000000000000UL},
	{0x0218U, 0x0000000000000000UL},
	{0x0220U, 0x0000000000000000UL},
	{0x0228U, 0x0000000000000000UL},
	{0x0230U, 0x0000000000000000UL},
	{0x0238U, 0x0000000000000000UL},
	{0x0240U, 0x0000000000000000UL},
	{0x0248U, 0x0000000000000000UL},
	{0x0250U, 0x0000000000000000UL},
	{0x0258U, 0x0000000000000000UL},
	{0x0260U, 0x0000000000000000UL},
	{0x0268U, 0x001408010000FFFFUL},
	{0x0270U, 0x001404010000FFFFUL},
	{0x0278U, 0x0000000000000000UL},
	{0x0280U, 0x0000000000000000UL},
	{0x0288U, 0x0000000000000000UL},
	{0x0290U, 0x001408010000FFFFUL},
	{0x0298U, 0x001404010000FFFFUL},
	{0x02A0U, 0x000C04010000FFFFUL},
	{0x02A8U, 0x000C04010000FFFFUL},
	{0x02B0U, 0x001404010000FFFFUL},
	{0x02B8U, 0x0000000000000000UL},
	{0x02C0U, 0x0000000000000000UL},
	{0x02C8U, 0x0000000000000000UL},
	{0x02D0U, 0x000C04010000FFFFUL},
	{0x02D8U, 0x000C04010000FFFFUL},
	{0x02E0U, 0x001404010000FFFFUL},
	{0x02E8U, 0x0000000000000000UL},
	{0x02F0U, 0x0000000000000000UL},
	{0x02F8U, 0x0000000000000000UL},
	{0x0300U, 0x0000000000000000UL},
	{0x0308U, 0x0000000000000000UL},
	{0x0310U, 0x0000000000000000UL},
	{0x0318U, 0x0000000000000000UL},
	{0x0320U, 0x0000000000000000UL},
	{0x0328U, 0x0000000000000000UL},
	{0x0330U, 0x0000000000000000UL},
	{0x0338U, 0x0000000000000000UL},
	{0x0340U, 0x0000000000000000UL},
	{0x0348U, 0x0000000000000000UL},
	{0x0350U, 0x0000000000000000UL},
};

static const mstat_slot_t mstat_be[] = {
	{0x0000U, 0x001200100C89C401UL},
	{0x0008U, 0x001200100C89C401UL},
	{0x0010U, 0x001200100C89C401UL},
	{0x0018U, 0x001200100C89C401UL},
	{0x0020U, 0x0000000000000000UL},
	{0x0028U, 0x001100100C803401UL},
	{0x0030U, 0x0000000000000000UL},
	{0x0038U, 0x0000000000000000UL},
	{0x0040U, 0x0000000000000000UL},
	{0x0048U, 0x0000000000000000UL},
	{0x0050U, 0x0000000000000000UL},
	{0x0058U, 0x0000000000000000UL},
	{0x0060U, 0x0000000000000000UL},
	{0x0068U, 0x0000000000000000UL},
	{0x0070U, 0x0000000000000000UL},
	{0x0078U, 0x0000000000000000UL},
	{0x0080U, 0x0000000000000000UL},
	{0x0088U, 0x0000000000000000UL},
	{0x0090U, 0x0000000000000000UL},
	{0x0098U, 0x0000000000000000UL},
	{0x00A0U, 0x0000000000000000UL},
	{0x00A8U, 0x0000000000000000UL},
	{0x00B0U, 0x0000000000000000UL},
	{0x00B8U, 0x0000000000000000UL},
	{0x00C0U, 0x0000000000000000UL},
	{0x00C8U, 0x0000000000000000UL},
	{0x00D0U, 0x0000000000000000UL},
	{0x00D8U, 0x0000000000000000UL},
	{0x00E0U, 0x0000000000000000UL},
	{0x00E8U, 0x0000000000000000UL},
	{0x00F0U, 0x0000000000000000UL},
	{0x00F8U, 0x0000000000000000UL},
	{0x0100U, 0x0000000000000000UL},
	{0x0108U, 0x0000000000000000UL},
	{0x0110U, 0x0000000000000000UL},
	{0x0118U, 0x0000000000000000UL},
	{0x0120U, 0x0000000000000000UL},
	{0x0128U, 0x0000000000000000UL},
	{0x0130U, 0x0000000000000000UL},
	{0x0138U, 0x0000000000000000UL},
	{0x0140U, 0x0000000000000000UL},
	{0x0148U, 0x0000000000000000UL},
	{0x0150U, 0x0000000000000000UL},
	{0x0158U, 0x0000000000000000UL},
	{0x0160U, 0x0000000000000000UL},
	{0x0168U, 0x0000000000000000UL},
	{0x0170U, 0x0000000000000000UL},
	{0x0178U, 0x0000000000000000UL},
	{0x0180U, 0x0000000000000000UL},
	{0x0188U, 0x0000000000000000UL},
	{0x0190U, 0x0000000000000000UL},
	{0x0198U, 0x0000000000000000UL},
	{0x01A0U, 0x0000000000000000UL},
	{0x01A8U, 0x0000000000000000UL},
	{0x01B0U, 0x0000000000000000UL},
	{0x01B8U, 0x0000000000000000UL},
	{0x01C0U, 0x001100500C8FFC01UL},
	{0x01C8U, 0x001100500C8FFC01UL},
	{0x01D0U, 0x001100500C8FFC01UL},
	{0x01D8U, 0x001100500C8FFC01UL},
	{0x01E0U, 0x0000000000000000UL},
	{0x01E8U, 0x001200100C803401UL},
	{0x01F0U, 0x001100100C80FC01UL},
	{0x01F8U, 0x0000000000000000UL},
	{0x0200U, 0x0000000000000000UL},
	{0x0208U, 0x001200100C80FC01UL},
	{0x0210U, 0x001100100C80FC01UL},
	{0x0218U, 0x001100100C825801UL},
	{0x0220U, 0x001100100C825801UL},
	{0x0228U, 0x0000000000000000UL},
	{0x0230U, 0x001100100C825801UL},
	{0x0238U, 0x001100100C825801UL},
	{0x0240U, 0x001200100C8BB801UL},
	{0x0248U, 0x001100100C8EA401UL},
	{0x0250U, 0x001200100C8BB801UL},
	{0x0258U, 0x001100100C8EA401UL},
	{0x0260U, 0x001100100C84E401UL},
	{0x0268U, 0x0000000000000000UL},
	{0x0270U, 0x0000000000000000UL},
	{0x0278U, 0x001100100C81F401UL},
	{0x0280U, 0x0000000000000000UL},
	{0x0288U, 0x0000000000000000UL},
	{0x0290U, 0x0000000000000000UL},
	{0x0298U, 0x0000000000000000UL},
	{0x02A0U, 0x0000000000000000UL},
	{0x02A8U, 0x0000000000000000UL},
	{0x02B0U, 0x0000000000000000UL},
	{0x02B8U, 0x001100100C803401UL},
	{0x02C0U, 0x0000000000000000UL},
	{0x02C8U, 0x0000000000000000UL},
	{0x02D0U, 0x0000000000000000UL},
	{0x02D8U, 0x0000000000000000UL},
	{0x02E0U, 0x0000000000000000UL},
	{0x02E8U, 0x001100100C803401UL},
	{0x02F0U, 0x001100300C8FFC01UL},
	{0x02F8U, 0x001100500C8FFC01UL},
	{0x0300U, 0x0000000000000000UL},
	{0x0308U, 0x001100300C8FFC01UL},
	{0x0310U, 0x001100500C8FFC01UL},
	{0x0318U, 0x001200100C803401UL},
	{0x0320U, 0x0000000000000000UL},
	{0x0328U, 0x0000000000000000UL},
	{0x0330U, 0x0000000000000000UL},
	{0x0338U, 0x0000000000000000UL},
	{0x0340U, 0x0000000000000000UL},
	{0x0348U, 0x0000000000000000UL},
	{0x0350U, 0x0000000000000000UL},
};
#endif