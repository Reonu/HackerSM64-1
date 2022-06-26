Lights1 fight_platform_OutsideSpikes_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 fight_platform_OutsideEdge_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx fight_platform_OutsideSpikes_i8_aligner[] = {gsSPEndDisplayList()};
u8 fight_platform_OutsideSpikes_i8[] = {
	0x8a, 0x83, 0x8a, 0x8a, 0x8a, 0x8a, 0x83, 0x8a, 
	0x87, 0x87, 0x83, 0x83, 0x89, 0x89, 0x8f, 0x89, 
	0x8a, 0x8f, 0x8a, 0x83, 0x89, 0x89, 0x89, 0x89, 
	0x8a, 0x8a, 0x83, 0x8a, 0x8f, 0x89, 0x7f, 0x7f, 
	0x8f, 0x8a, 0x8a, 0x8a, 0x83, 0x83, 0x8a, 0x8a, 
	0x87, 0x83, 0x83, 0x83, 0x7f, 0x89, 0x89, 0x7f, 
	0x97, 0x97, 0x8a, 0x8a, 0x89, 0x89, 0x7f, 0x7f, 
	0x8f, 0x8a, 0x8a, 0x83, 0x7f, 0x7f, 0x89, 0x89, 
	0x8f, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8f, 0x8a, 
	0x83, 0x87, 0x87, 0x87, 0x89, 0x8f, 0x8f, 0x89, 
	0x8f, 0x8a, 0x83, 0x83, 0x89, 0x8f, 0x8f, 0x89, 
	0x8a, 0x8a, 0x8f, 0x8a, 0x7f, 0x89, 0x8f, 0x89, 
	0x8a, 0x83, 0x83, 0x8a, 0x8a, 0x8a, 0x8a, 0x83, 
	0x83, 0x87, 0x87, 0x83, 0x89, 0x8f, 0x8f, 0x89, 
	0x83, 0x8a, 0x8f, 0x83, 0x89, 0x8f, 0x8f, 0x89, 
	0x8a, 0x8a, 0x8f, 0x8a, 0x7f, 0x7f, 0x89, 0x89, 
	0x83, 0x83, 0x83, 0x8a, 0x8f, 0x8a, 0x83, 0x83, 
	0x7f, 0x7f, 0x89, 0x89, 0x87, 0x87, 0x83, 0x87, 
	0x89, 0x8f, 0x8f, 0x7f, 0x8f, 0x8f, 0x89, 0x7f, 
	0x89, 0x8f, 0x8f, 0x89, 0x83, 0x8a, 0x83, 0x8a, 
	0x83, 0x8a, 0x8a, 0x8a, 0x83, 0x83, 0x8a, 0x8a, 
	0x7f, 0x89, 0x89, 0x89, 0x87, 0x83, 0x83, 0x87, 
	0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x7f, 0x7f, 
	0x89, 0x89, 0x89, 0x7f, 0x8a, 0x8f, 0x8a, 0x8a, 
	0x8a, 0x8a, 0x8f, 0x8a, 0x8a, 0x8f, 0x8f, 0x8a, 
	0x89, 0x8f, 0x89, 0x89, 0x87, 0x87, 0x87, 0x83, 
	0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x89, 0x7f, 0x7f, 0x7f, 0x83, 0x8a, 0x8a, 0x8a, 
	0x8a, 0x83, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x83, 
	0x89, 0x8f, 0x8f, 0x7f, 0x83, 0x87, 0x87, 0x87, 
	0x7f, 0x89, 0x89, 0x7f, 0x89, 0x89, 0x7f, 0x89, 
	0x89, 0x89, 0x89, 0x89, 0x83, 0x83, 0x8a, 0x8a, 
	0x8a, 0x8a, 0x83, 0x83, 0x8a, 0x83, 0x83, 0x83, 
	0x8b, 0x93, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x7f, 
	0x83, 0x8f, 0x8a, 0x8a, 0x8f, 0x8f, 0x87, 0x87, 
	0x89, 0x89, 0x8f, 0x8f, 0x8a, 0x83, 0x8f, 0x8f, 
	0x83, 0x8a, 0x8a, 0x83, 0x83, 0x83, 0x83, 0x83, 
	0x86, 0x86, 0x7f, 0x93, 0x93, 0x8b, 0x7f, 0x86, 
	0x83, 0x8a, 0x8a, 0x8a, 0x8c, 0x8c, 0x8c, 0x87, 
	0x7f, 0x7f, 0x89, 0x8f, 0x8a, 0x83, 0x8a, 0x8f, 
	0x8a, 0x83, 0x8a, 0x8a, 0x8a, 0x83, 0x83, 0x8a, 
	0x8b, 0x8b, 0x8b, 0x93, 0x93, 0x86, 0x86, 0x93, 
	0x8a, 0x83, 0x83, 0x8a, 0x8c, 0x87, 0x8c, 0x8c, 
	0x7f, 0x7f, 0x89, 0x8f, 0x8f, 0x8a, 0x83, 0x8a, 
	0x8f, 0x83, 0x8a, 0x8f, 0x8f, 0x8a, 0x8a, 0x8a, 
	0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x7f, 0x8b, 0x8b, 
	0x8a, 0x8a, 0x8a, 0x8a, 0x8c, 0x8c, 0x8c, 0x87, 
	0x7f, 0x7f, 0x7f, 0x8f, 0x8f, 0x8a, 0x8a, 0x83, 
	0x87, 0x87, 0x8f, 0x87, 0x83, 0x8a, 0x8f, 0x8a, 
	0x87, 0x87, 0x83, 0x83, 0x83, 0x87, 0x87, 0x83, 
	0x8a, 0x8f, 0x8f, 0x83, 0x8a, 0x8f, 0x8a, 0x83, 
	0x89, 0x89, 0x7f, 0x7f, 0x8a, 0x8f, 0x8a, 0x83, 
	0x87, 0x87, 0x87, 0x87, 0x8a, 0x83, 0x8a, 0x8f, 
	0x87, 0x83, 0x83, 0x83, 0x83, 0x87, 0x87, 0x87, 
	0x8a, 0x97, 0x97, 0x83, 0x8a, 0x8f, 0x83, 0x83, 
	0x89, 0x8f, 0x89, 0x7f, 0x83, 0x8a, 0x83, 0x83, 
	0x87, 0x87, 0x87, 0x8f, 0x8f, 0x83, 0x8a, 0x8f, 
	0x87, 0x87, 0x87, 0x87, 0x87, 0x83, 0x87, 0x87, 
	0x83, 0x8f, 0x8a, 0x83, 0x8a, 0x83, 0x83, 0x83, 
	0x7f, 0x89, 0x89, 0x7f, 0x8a, 0x83, 0x83, 0x8a, 
	0x8f, 0x87, 0x87, 0x8f, 0x8a, 0x83, 0x8a, 0x8f, 
	0x87, 0x87, 0x87, 0x83, 0x83, 0x87, 0x87, 0x83, 
	0x83, 0x83, 0x83, 0x83, 0x83, 0x8a, 0x8a, 0x8a, 
	0x7f, 0x7f, 0x7f, 0x89, 0x8f, 0x8a, 0x83, 0x83, 
	0x87, 0x87, 0x7f, 0x7f, 0x89, 0x7f, 0x7f, 0x89, 
	0x87, 0x7f, 0x87, 0x7f, 0x7f, 0x89, 0x7f, 0x89, 
	0x8f, 0x8f, 0x8a, 0x83, 0x83, 0x8a, 0x8f, 0x83, 
	0x8a, 0x8f, 0x8a, 0x8f, 0x89, 0x89, 0x7f, 0x7f, 
	0x7f, 0x87, 0x87, 0x7f, 0x89, 0x8f, 0x89, 0x89, 
	0x87, 0x7f, 0x7f, 0x7f, 0x89, 0x8f, 0x7f, 0x89, 
	0x8f, 0x8f, 0x8a, 0x8a, 0x83, 0x83, 0x8a, 0x83, 
	0x83, 0x83, 0x8a, 0x8a, 0x89, 0x89, 0x7f, 0x7f, 
	0x7f, 0x87, 0x87, 0x7f, 0x89, 0x89, 0x89, 0x89, 
	0x7f, 0x7f, 0x7f, 0x87, 0x89, 0x89, 0x8f, 0x89, 
	0x8a, 0x8a, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 
	0x8a, 0x8f, 0x83, 0x8a, 0x8f, 0x89, 0x8f, 0x8f, 
	0x87, 0x7f, 0x87, 0x87, 0x89, 0x7f, 0x7f, 0x7f, 
	0x87, 0x87, 0x87, 0x87, 0x7f, 0x89, 0x8f, 0x89, 
	0x8a, 0x83, 0x8a, 0x8a, 0x8a, 0x8a, 0x83, 0x83, 
	0x8f, 0x97, 0x8a, 0x8a, 0x89, 0x89, 0x8f, 0x8f, 
	0x8f, 0x89, 0x7f, 0x89, 0x87, 0x7f, 0x87, 0x87, 
	0x89, 0x8f, 0x89, 0x7f, 0x8a, 0x8a, 0x83, 0x83, 
	0x7f, 0x89, 0x8f, 0x8f, 0x89, 0x89, 0x8f, 0x89, 
	0x8a, 0x8a, 0x8a, 0x83, 0x89, 0x89, 0x89, 0x89, 
	0x8f, 0x8f, 0x7f, 0x7f, 0x87, 0x7f, 0x87, 0x87, 
	0x89, 0x8f, 0x89, 0x7f, 0x8f, 0x8f, 0x8a, 0x8a, 
	0x89, 0x89, 0x89, 0x89, 0x7f, 0x89, 0x8f, 0x89, 
	0x8a, 0x8a, 0x8a, 0x8a, 0x89, 0x89, 0x7f, 0x8f, 
	0x8f, 0x89, 0x7f, 0x89, 0x87, 0x7f, 0x87, 0x87, 
	0x7f, 0x89, 0x89, 0x89, 0x8f, 0x8a, 0x83, 0x8a, 
	0x89, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x89, 0x89, 
	0x8a, 0x83, 0x83, 0x83, 0x89, 0x7f, 0x7f, 0x89, 
	0x7f, 0x7f, 0x89, 0x89, 0x87, 0x7f, 0x7f, 0x7f, 
	0x7f, 0x89, 0x89, 0x89, 0x8a, 0x83, 0x8a, 0x8a, 
	0x7f, 0x89, 0x8f, 0x89, 0x7f, 0x89, 0x89, 0x7f, 
	0x8a, 0x8f, 0x8f, 0x83, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x88, 0x7f, 0x97, 0x97, 0x89, 0x7f, 0x7f, 0x89, 
	0x8a, 0x8a, 0x83, 0x83, 0x8a, 0x8a, 0x8f, 0x8f, 
	0x8a, 0x8f, 0x8f, 0x8a, 0x7f, 0x8f, 0x8f, 0x89, 
	0x8a, 0x8a, 0x8f, 0x8f, 0x87, 0x7f, 0x7f, 0x7f, 
	0x8e, 0x7f, 0x88, 0x8e, 0x89, 0x89, 0x7f, 0x89, 
	0x8f, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 0x8a, 
	0x83, 0x8a, 0x8a, 0x8a, 0x7f, 0x8f, 0x8f, 0x89, 
	0x8a, 0x8a, 0x8f, 0x8f, 0x87, 0x7f, 0x7f, 0x87, 
	0x88, 0x7f, 0x7f, 0x8e, 0x89, 0x89, 0x7f, 0x89, 
	0x8a, 0x83, 0x8a, 0x8a, 0x8a, 0x8a, 0x83, 0x83, 
	0x8a, 0x83, 0x8a, 0x8a, 0x7f, 0x89, 0x8f, 0x8f, 
	0x8a, 0x83, 0x8a, 0x8a, 0x7f, 0x87, 0x87, 0x87, 
	0x7f, 0x88, 0x7f, 0x8e, 0x89, 0x7f, 0x7f, 0x8f, 
	0x8f, 0x83, 0x8f, 0x8a, 0x83, 0x83, 0x83, 0x83, 
	0x8a, 0x8a, 0x8a, 0x8a, 0x89, 0x89, 0x89, 0x89, 
	0x83, 0x8a, 0x8a, 0x8a, 0x7f, 0x87, 0x87, 0x87, 
	0x8a, 0x83, 0x8f, 0x8a, 0x83, 0x8a, 0x8a, 0x8f, 
	0x89, 0x7f, 0x8f, 0x8f, 0x8f, 0x8f, 0x7f, 0x8f, 
	0x8f, 0x83, 0x83, 0x83, 0x89, 0x8f, 0x7f, 0x7f, 
	0x8f, 0x8a, 0x8a, 0x8f, 0x89, 0x7f, 0x7f, 0x89, 
	0x8a, 0x83, 0x8a, 0x83, 0x8a, 0x8a, 0x8a, 0x83, 
	0x7f, 0x7f, 0x89, 0x89, 0x8f, 0x89, 0x7f, 0x89, 
	0x8a, 0x8a, 0x8f, 0x83, 0x89, 0x8f, 0x89, 0x89, 
	0x8f, 0x8f, 0x8a, 0x83, 0x89, 0x89, 0x89, 0x8f, 
	0x83, 0x83, 0x8a, 0x8f, 0x8a, 0x83, 0x8a, 0x8a, 
	0x7f, 0x8f, 0x89, 0x7f, 0x7f, 0x89, 0x89, 0x89, 
	0x83, 0x8a, 0x8f, 0x8a, 0x7f, 0x89, 0x89, 0x89, 
	0x8a, 0x8f, 0x8f, 0x8a, 0x89, 0x89, 0x89, 0x8f, 
	0x8a, 0x83, 0x83, 0x8a, 0x8a, 0x83, 0x8a, 0x8a, 
	0x89, 0x8f, 0x8f, 0x7f, 0x89, 0x8f, 0x8f, 0x89, 
	0x8a, 0x8a, 0x83, 0x83, 0x7f, 0x89, 0x89, 0x89, 
	0x83, 0x8a, 0x8a, 0x8a, 0x7f, 0x89, 0x7f, 0x89, 
	
};

Gfx fight_platform_OutsideEdge_i8_aligner[] = {gsSPEndDisplayList()};
u8 fight_platform_OutsideEdge_i8[] = {
	0x0a, 0x03, 0x0a, 0x0a, 0x0a, 0x0a, 0x03, 0x0a, 
	0x07, 0x07, 0x03, 0x03, 0x08, 0x08, 0x0e, 0x08, 
	0x0a, 0x0f, 0x0a, 0x03, 0x08, 0x08, 0x08, 0x08, 
	0x0a, 0x0a, 0x03, 0x0a, 0x0e, 0x08, 0x02, 0x02, 
	0x0e, 0x0a, 0x0a, 0x0a, 0x03, 0x03, 0x0a, 0x0a, 
	0x07, 0x03, 0x03, 0x03, 0x02, 0x08, 0x08, 0x02, 
	0x16, 0x16, 0x0a, 0x0a, 0x08, 0x08, 0x02, 0x02, 
	0x0e, 0x0a, 0x0a, 0x03, 0x02, 0x02, 0x08, 0x08, 
	0x0e, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0e, 0x0a, 
	0x03, 0x07, 0x07, 0x07, 0x08, 0x0e, 0x0e, 0x08, 
	0x0f, 0x0a, 0x03, 0x03, 0x08, 0x0e, 0x0e, 0x08, 
	0x0a, 0x0a, 0x0e, 0x0a, 0x02, 0x08, 0x0e, 0x08, 
	0x0a, 0x03, 0x03, 0x0a, 0x0a, 0x0a, 0x0a, 0x03, 
	0x03, 0x07, 0x07, 0x03, 0x08, 0x0e, 0x0e, 0x08, 
	0x03, 0x0a, 0x0f, 0x03, 0x08, 0x0e, 0x0e, 0x08, 
	0x0a, 0x0a, 0x0e, 0x0a, 0x02, 0x02, 0x08, 0x08, 
	0x03, 0x03, 0x03, 0x0a, 0x0e, 0x0a, 0x03, 0x03, 
	0x02, 0x02, 0x08, 0x08, 0x07, 0x07, 0x03, 0x07, 
	0x08, 0x0e, 0x0e, 0x02, 0x0e, 0x0e, 0x08, 0x02, 
	0x08, 0x0e, 0x0e, 0x08, 0x03, 0x0a, 0x03, 0x0a, 
	0x03, 0x0a, 0x0a, 0x0a, 0x03, 0x03, 0x0a, 0x0a, 
	0x02, 0x08, 0x08, 0x08, 0x07, 0x03, 0x03, 0x07, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x02, 0x02, 
	0x08, 0x08, 0x08, 0x02, 0x0a, 0x0e, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x0e, 0x0a, 0x0a, 0x0e, 0x0e, 0x0a, 
	0x08, 0x0e, 0x08, 0x08, 0x07, 0x07, 0x07, 0x03, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x08, 0x02, 0x02, 0x02, 0x03, 0x0a, 0x0a, 0x0a, 
	0x0a, 0x03, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x03, 
	0x08, 0x0e, 0x0e, 0x02, 0x03, 0x07, 0x07, 0x07, 
	0x02, 0x08, 0x08, 0x02, 0x08, 0x08, 0x02, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x03, 0x03, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x03, 0x03, 0x0a, 0x03, 0x03, 0x03, 
	0x0b, 0x12, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x02, 
	0x03, 0x0e, 0x0a, 0x0a, 0x0e, 0x0e, 0x07, 0x07, 
	0x08, 0x08, 0x0e, 0x0e, 0x0a, 0x03, 0x0e, 0x0e, 
	0x03, 0x0a, 0x0a, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x06, 0x06, 0x02, 0x12, 0x12, 0x0b, 0x02, 0x06, 
	0x03, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b, 0x0b, 0x07, 
	0x02, 0x02, 0x08, 0x0e, 0x0a, 0x03, 0x0a, 0x0e, 
	0x0a, 0x03, 0x0a, 0x0a, 0x0a, 0x03, 0x03, 0x0a, 
	0x0b, 0x0b, 0x0b, 0x12, 0x12, 0x06, 0x06, 0x12, 
	0x0a, 0x03, 0x03, 0x0a, 0x0b, 0x07, 0x0b, 0x0b, 
	0x02, 0x02, 0x08, 0x0e, 0x0e, 0x0a, 0x03, 0x0a, 
	0x0e, 0x03, 0x0a, 0x0e, 0x0e, 0x0a, 0x0a, 0x0a, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x02, 0x0b, 0x0b, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b, 0x0b, 0x07, 
	0x02, 0x02, 0x02, 0x0e, 0x0e, 0x0a, 0x0a, 0x03, 
	0x07, 0x07, 0x0e, 0x07, 0x03, 0x0a, 0x0e, 0x0a, 
	0x07, 0x07, 0x03, 0x03, 0x03, 0x07, 0x07, 0x03, 
	0x0a, 0x0f, 0x0f, 0x03, 0x0a, 0x0e, 0x0a, 0x03, 
	0x08, 0x08, 0x02, 0x02, 0x0a, 0x0e, 0x0a, 0x03, 
	0x07, 0x07, 0x07, 0x07, 0x0a, 0x03, 0x0a, 0x0e, 
	0x07, 0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 
	0x0a, 0x16, 0x16, 0x03, 0x0a, 0x0e, 0x03, 0x03, 
	0x08, 0x0e, 0x08, 0x02, 0x03, 0x0a, 0x03, 0x03, 
	0x07, 0x07, 0x07, 0x0e, 0x0e, 0x03, 0x0a, 0x0e, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x07, 0x07, 
	0x03, 0x0f, 0x0a, 0x03, 0x0a, 0x03, 0x03, 0x03, 
	0x02, 0x08, 0x08, 0x02, 0x0a, 0x03, 0x03, 0x0a, 
	0x0e, 0x07, 0x07, 0x0e, 0x0a, 0x03, 0x0a, 0x0e, 
	0x07, 0x07, 0x07, 0x03, 0x03, 0x07, 0x07, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x0a, 0x0a, 0x0a, 
	0x02, 0x02, 0x02, 0x08, 0x0e, 0x0a, 0x03, 0x03, 
	0x07, 0x07, 0x02, 0x02, 0x08, 0x02, 0x02, 0x08, 
	0x07, 0x02, 0x07, 0x02, 0x02, 0x08, 0x02, 0x08, 
	0x0e, 0x0e, 0x0a, 0x03, 0x03, 0x0a, 0x0e, 0x03, 
	0x0a, 0x0f, 0x0a, 0x0f, 0x08, 0x08, 0x02, 0x02, 
	0x02, 0x07, 0x07, 0x02, 0x08, 0x0e, 0x08, 0x08, 
	0x07, 0x02, 0x02, 0x02, 0x08, 0x0e, 0x02, 0x08, 
	0x0e, 0x0e, 0x0a, 0x0a, 0x03, 0x03, 0x0a, 0x03, 
	0x03, 0x03, 0x0a, 0x0a, 0x08, 0x08, 0x02, 0x02, 
	0x02, 0x07, 0x07, 0x02, 0x08, 0x08, 0x08, 0x08, 
	0x02, 0x02, 0x02, 0x07, 0x08, 0x08, 0x0e, 0x08, 
	0x0a, 0x0a, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x0a, 0x0f, 0x03, 0x0a, 0x0e, 0x08, 0x0e, 0x0e, 
	0x07, 0x02, 0x07, 0x07, 0x08, 0x02, 0x02, 0x02, 
	0x07, 0x07, 0x07, 0x07, 0x02, 0x08, 0x0e, 0x08, 
	0x0a, 0x03, 0x0a, 0x0a, 0x0a, 0x0a, 0x03, 0x03, 
	0x0f, 0x16, 0x0a, 0x0a, 0x08, 0x08, 0x0e, 0x0e, 
	0x0e, 0x08, 0x02, 0x08, 0x07, 0x02, 0x07, 0x07, 
	0x08, 0x0e, 0x08, 0x02, 0x0a, 0x0a, 0x03, 0x03, 
	0x02, 0x08, 0x0e, 0x0e, 0x08, 0x08, 0x0e, 0x08, 
	0x0a, 0x0a, 0x0a, 0x03, 0x08, 0x08, 0x08, 0x08, 
	0x0e, 0x0e, 0x02, 0x02, 0x07, 0x02, 0x07, 0x07, 
	0x08, 0x0e, 0x08, 0x02, 0x0e, 0x0e, 0x0a, 0x0a, 
	0x08, 0x08, 0x08, 0x08, 0x02, 0x08, 0x0e, 0x08, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x08, 0x08, 0x02, 0x0e, 
	0x0e, 0x08, 0x02, 0x08, 0x07, 0x02, 0x07, 0x07, 
	0x02, 0x08, 0x08, 0x08, 0x0e, 0x0a, 0x03, 0x0a, 
	0x08, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x08, 
	0x0a, 0x03, 0x03, 0x03, 0x08, 0x02, 0x02, 0x08, 
	0x02, 0x02, 0x08, 0x08, 0x07, 0x02, 0x02, 0x02, 
	0x02, 0x08, 0x08, 0x08, 0x0a, 0x03, 0x0a, 0x0a, 
	0x02, 0x08, 0x0e, 0x08, 0x02, 0x08, 0x08, 0x02, 
	0x0a, 0x0e, 0x0e, 0x03, 0x02, 0x02, 0x02, 0x02, 
	0x07, 0x02, 0x16, 0x16, 0x08, 0x02, 0x02, 0x08, 
	0x0a, 0x0a, 0x03, 0x03, 0x0a, 0x0a, 0x0e, 0x0e, 
	0x0a, 0x0e, 0x0e, 0x0a, 0x02, 0x0e, 0x0e, 0x08, 
	0x0a, 0x0a, 0x0e, 0x0e, 0x07, 0x02, 0x02, 0x02, 
	0x0d, 0x02, 0x07, 0x0d, 0x08, 0x08, 0x02, 0x08, 
	0x0e, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x03, 0x0a, 0x0a, 0x0a, 0x02, 0x0e, 0x0e, 0x08, 
	0x0a, 0x0a, 0x0e, 0x0e, 0x07, 0x02, 0x02, 0x07, 
	0x07, 0x02, 0x02, 0x0d, 0x08, 0x08, 0x02, 0x08, 
	0x0a, 0x03, 0x0a, 0x0a, 0x0a, 0x0a, 0x03, 0x03, 
	0x0a, 0x03, 0x0a, 0x0a, 0x02, 0x08, 0x0e, 0x0e, 
	0x0a, 0x03, 0x0a, 0x0a, 0x02, 0x07, 0x07, 0x07, 
	0x02, 0x07, 0x02, 0x0d, 0x08, 0x02, 0x02, 0x0e, 
	0x0e, 0x03, 0x0e, 0x0a, 0x03, 0x03, 0x03, 0x03, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x08, 0x08, 0x08, 0x08, 
	0x03, 0x0a, 0x0a, 0x0a, 0x02, 0x07, 0x07, 0x07, 
	0x0a, 0x03, 0x0e, 0x0a, 0x03, 0x0a, 0x0a, 0x0e, 
	0x08, 0x02, 0x0e, 0x0e, 0x0e, 0x0e, 0x02, 0x0e, 
	0x0e, 0x03, 0x03, 0x03, 0x08, 0x0e, 0x02, 0x02, 
	0x0e, 0x0a, 0x0a, 0x0e, 0x08, 0x02, 0x02, 0x08, 
	0x0a, 0x03, 0x0a, 0x03, 0x0a, 0x0a, 0x0a, 0x03, 
	0x02, 0x02, 0x08, 0x08, 0x0e, 0x08, 0x02, 0x08, 
	0x0a, 0x0a, 0x0e, 0x03, 0x08, 0x0e, 0x08, 0x08, 
	0x0e, 0x0e, 0x0a, 0x03, 0x08, 0x08, 0x08, 0x0e, 
	0x03, 0x03, 0x0a, 0x0e, 0x0a, 0x03, 0x0a, 0x0a, 
	0x02, 0x0e, 0x08, 0x02, 0x02, 0x08, 0x08, 0x08, 
	0x03, 0x0a, 0x0e, 0x0a, 0x02, 0x08, 0x08, 0x08, 
	0x0a, 0x0e, 0x0e, 0x0a, 0x08, 0x08, 0x08, 0x0e, 
	0x0a, 0x03, 0x03, 0x0a, 0x0a, 0x03, 0x0a, 0x0a, 
	0x08, 0x0e, 0x0e, 0x02, 0x08, 0x0e, 0x0e, 0x08, 
	0x0a, 0x0a, 0x03, 0x03, 0x02, 0x08, 0x08, 0x08, 
	0x03, 0x0a, 0x0a, 0x0a, 0x02, 0x08, 0x02, 0x08, 
	
};

Vtx fight_platform_spiner_mesh_layer_1_vtx_cull[8] = {
	{{{-401, 49, 403},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-401, 182, 403},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-401, 182, -397},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-401, 49, -397},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{405, 49, 403},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{405, 182, 403},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{405, 182, -397},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{405, 49, -397},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx fight_platform_spiner_mesh_layer_1_vtx_0[108] = {
	{{{-206, 80, -157},0, {-880, 19497},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-220, 85, -221},0, {-1278, 19533},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{-181, 65, -182},0, {-971, 19713},{0x71, 0x71, 0x71, 0xFF}}},
	{{{-278, 116, -280},0, {-1736, 19263},{0x91, 0x73, 0x9A, 0xFF}}},
	{{{-217, 116, -146},0, {-849, 19263},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-206, 152, -157},0, {-880, 19030},{0xFA, 0xFA, 0xFA, 0xFF}}},
	{{{-181, 167, -182},0, {-971, 18814},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-155, 152, -208},0, {-1117, 18628},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-145, 116, -218},0, {-1305, 18488},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-155, 80, -208},0, {-1524, 18402},{0x71, 0x71, 0x71, 0xFF}}},
	{{{-205, 94, -237},0, {-1609, 18747},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{-181, 65, -182},0, {-1758, 18376},{0x71, 0x71, 0x71, 0xFF}}},
	{{{-220, 85, -221},0, {-1749, 18732},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{267, 80, -33},0, {-880, 19497},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{322, 85, 3},0, {-1278, 19533},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{267, 65, 3},0, {-971, 19713},{0x71, 0x71, 0x71, 0xFF}}},
	{{{405, 116, 3},0, {-1736, 19263},{0x83, 0x4D, 0x91, 0xFF}}},
	{{{267, 116, -48},0, {-849, 19263},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{267, 152, -33},0, {-880, 19030},{0xC0, 0xC0, 0xC0, 0xC0}}},
	{{{267, 167, 3},0, {-971, 18814},{0xB3, 0xB3, 0xB3, 0x39}}},
	{{{267, 152, 39},0, {-1117, 18628},{0xBD, 0xBD, 0xBD, 0x68}}},
	{{{267, 116, 54},0, {-1305, 18488},{0xBD, 0xBD, 0xBD, 0x4A}}},
	{{{322, 94, 25},0, {-1609, 18747},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{267, 80, 39},0, {-1524, 18402},{0x71, 0x71, 0x71, 0xFF}}},
	{{{267, 65, 3},0, {-1758, 18376},{0x71, 0x71, 0x71, 0xFF}}},
	{{{322, 85, 3},0, {-1749, 18732},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{164, 80, -208},0, {-880, 19497},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{229, 85, -221},0, {-1278, 19533},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{190, 65, -182},0, {-971, 19713},{0x71, 0x71, 0x71, 0x76}}},
	{{{288, 116, -280},0, {-1736, 19263},{0x83, 0x4D, 0x91, 0xFF}}},
	{{{154, 116, -218},0, {-849, 19263},{0x78, 0x78, 0x78, 0xDB}}},
	{{{164, 152, -208},0, {-880, 19030},{0xBD, 0xBD, 0xBD, 0xB4}}},
	{{{288, 116, -280},0, {-1736, 19263},{0x83, 0x4D, 0x91, 0xFF}}},
	{{{164, 152, -208},0, {-880, 19030},{0xBD, 0xBD, 0xBD, 0xB4}}},
	{{{190, 167, -182},0, {-971, 18814},{0xB8, 0xB8, 0xB8, 0x70}}},
	{{{215, 152, -157},0, {-1117, 18628},{0xBD, 0xBD, 0xBD, 0x78}}},
	{{{226, 116, -146},0, {-1305, 18488},{0xFF, 0xFF, 0xFF, 0x78}}},
	{{{215, 80, -157},0, {-1524, 18402},{0x71, 0x71, 0x71, 0x84}}},
	{{{244, 94, -206},0, {-1609, 18747},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{190, 65, -182},0, {-1758, 18376},{0x71, 0x71, 0x71, 0x76}}},
	{{{229, 85, -221},0, {-1749, 18732},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{41, 80, 265},0, {-880, 19497},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{5, 85, 321},0, {-1278, 19533},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{5, 65, 265},0, {-971, 19713},{0x71, 0x71, 0x71, 0xFF}}},
	{{{5, 116, 403},0, {-1736, 19263},{0x94, 0x7B, 0x9C, 0xFF}}},
	{{{56, 116, 265},0, {-849, 19263},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{41, 152, 265},0, {-880, 19030},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{5, 167, 265},0, {-971, 18814},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-32, 152, 265},0, {-1117, 18628},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-46, 116, 265},0, {-1305, 18488},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-32, 80, 265},0, {-1524, 18402},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-17, 94, 321},0, {-1609, 18747},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{5, 65, 265},0, {-1758, 18376},{0x71, 0x71, 0x71, 0xFF}}},
	{{{5, 85, 321},0, {-1749, 18732},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{-32, 80, -259},0, {-880, 19497},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{5, 85, -314},0, {-1278, 19533},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{5, 65, -259},0, {-971, 19713},{0x71, 0x71, 0x71, 0xFF}}},
	{{{5, 116, -397},0, {-1736, 19263},{0x84, 0x4F, 0x91, 0xFF}}},
	{{{-46, 116, -259},0, {-849, 19263},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-32, 152, -259},0, {-880, 19030},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{5, 167, -259},0, {-971, 18814},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{41, 152, -259},0, {-1117, 18628},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{56, 116, -259},0, {-1305, 18488},{0xC4, 0xC4, 0xC4, 0xFF}}},
	{{{41, 80, -259},0, {-1524, 18402},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{41, 80, -259},0, {-1524, 18402},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{26, 94, -314},0, {-1609, 18747},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{5, 116, -397},0, {-1736, 19263},{0x84, 0x4F, 0x91, 0xFF}}},
	{{{5, 65, -259},0, {-1758, 18376},{0x71, 0x71, 0x71, 0xFF}}},
	{{{5, 85, -314},0, {-1749, 18732},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{215, 80, 163},0, {-880, 19497},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{229, 85, 228},0, {-1278, 19533},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{190, 65, 188},0, {-971, 19713},{0x71, 0x71, 0x71, 0xFF}}},
	{{{288, 116, 286},0, {-1736, 19263},{0x84, 0x4F, 0x91, 0xFF}}},
	{{{226, 116, 152},0, {-849, 19263},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{215, 152, 163},0, {-880, 19030},{0xD4, 0xD4, 0xD4, 0xFF}}},
	{{{190, 167, 188},0, {-971, 18814},{0xBE, 0xBE, 0xBE, 0xFF}}},
	{{{164, 152, 214},0, {-1117, 18628},{0xBE, 0xBE, 0xBE, 0xFF}}},
	{{{154, 116, 225},0, {-1305, 18488},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{164, 80, 214},0, {-1524, 18402},{0x71, 0x71, 0x71, 0xFF}}},
	{{{214, 94, 243},0, {-1609, 18747},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{190, 65, 188},0, {-1758, 18376},{0x71, 0x71, 0x71, 0xFF}}},
	{{{229, 85, 228},0, {-1749, 18732},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{-155, 80, 214},0, {-880, 19497},{0xE4, 0xE4, 0xE4, 0xFF}}},
	{{{-220, 85, 228},0, {-1278, 19533},{0xD7, 0xD7, 0xD7, 0xFF}}},
	{{{-181, 65, 188},0, {-971, 19713},{0x74, 0x74, 0x74, 0xFF}}},
	{{{-278, 116, 286},0, {-1736, 19263},{0x91, 0x71, 0x9B, 0xFF}}},
	{{{-145, 116, 225},0, {-849, 19263},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-155, 152, 214},0, {-880, 19030},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-181, 167, 188},0, {-971, 18814},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-206, 152, 163},0, {-1117, 18628},{0xFB, 0xFB, 0xFB, 0xFF}}},
	{{{-217, 116, 152},0, {-1305, 18488},{0xC4, 0xC4, 0xC4, 0xFF}}},
	{{{-206, 80, 163},0, {-1524, 18402},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-235, 94, 212},0, {-1609, 18747},{0xBD, 0xBD, 0xBD, 0xFF}}},
	{{{-181, 65, 188},0, {-1758, 18376},{0x74, 0x74, 0x74, 0xFF}}},
	{{{-220, 85, 228},0, {-1749, 18732},{0xD7, 0xD7, 0xD7, 0xFF}}},
	{{{-263, 80, -33},0, {-880, 19497},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-263, 65, 3},0, {-971, 19713},{0x71, 0x71, 0x71, 0xFF}}},
	{{{-319, 85, 3},0, {-1278, 19533},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{-401, 116, 3},0, {-1736, 19263},{0x8B, 0x64, 0x96, 0xFF}}},
	{{{-263, 116, -48},0, {-849, 19263},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-263, 152, -33},0, {-880, 19030},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-263, 167, 3},0, {-971, 18814},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-263, 152, 39},0, {-1117, 18628},{0xC1, 0xC1, 0xC1, 0xFF}}},
	{{{-263, 116, 54},0, {-1305, 18488},{0xFD, 0xFD, 0xFD, 0xFF}}},
	{{{-319, 94, 25},0, {-1609, 18747},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{-319, 85, 3},0, {-1749, 18732},{0xDF, 0xDF, 0xDF, 0xFF}}},
	{{{-263, 80, 39},0, {-1524, 18402},{0xAB, 0xAB, 0xAB, 0xFF}}},
	{{{-263, 65, 3},0, {-1758, 18376},{0x71, 0x71, 0x71, 0xFF}}},
};

Gfx fight_platform_spiner_mesh_layer_1_tri_0[] = {
	gsSPVertex(fight_platform_spiner_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
	gsSP2Triangles(3, 7, 8, 0, 9, 3, 8, 0),
	gsSP2Triangles(9, 10, 3, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 12, 10, 0, 3, 10, 12, 0),
	gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
	gsSP2Triangles(16, 13, 17, 0, 16, 17, 18, 0),
	gsSP2Triangles(16, 18, 19, 0, 16, 19, 20, 0),
	gsSP2Triangles(16, 20, 21, 0, 22, 16, 21, 0),
	gsSP2Triangles(23, 22, 21, 0, 24, 22, 23, 0),
	gsSP2Triangles(24, 25, 22, 0, 16, 22, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
	gsSP2Triangles(29, 26, 30, 0, 29, 30, 31, 0),
	gsSPVertex(fight_platform_spiner_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 6, 0, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 0, 6, 8, 0),
	gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
	gsSP2Triangles(12, 9, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(12, 14, 15, 0, 12, 15, 16, 0),
	gsSP2Triangles(12, 16, 17, 0, 18, 12, 17, 0),
	gsSP2Triangles(18, 19, 12, 0, 20, 19, 18, 0),
	gsSP2Triangles(20, 21, 19, 0, 12, 19, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
	gsSP2Triangles(25, 22, 26, 0, 25, 26, 27, 0),
	gsSP2Triangles(25, 27, 28, 0, 25, 28, 29, 0),
	gsSP2Triangles(25, 29, 30, 0, 31, 25, 30, 0),
	gsSPVertex(fight_platform_spiner_mesh_layer_1_vtx_0 + 64, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 2, 1, 4, 0),
	gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
	gsSP2Triangles(8, 5, 9, 0, 8, 9, 10, 0),
	gsSP2Triangles(8, 10, 11, 0, 8, 11, 12, 0),
	gsSP2Triangles(8, 12, 13, 0, 14, 8, 13, 0),
	gsSP2Triangles(14, 15, 8, 0, 16, 15, 14, 0),
	gsSP2Triangles(16, 17, 15, 0, 8, 15, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
	gsSP2Triangles(21, 18, 22, 0, 21, 22, 23, 0),
	gsSP2Triangles(21, 23, 24, 0, 21, 24, 25, 0),
	gsSP2Triangles(21, 25, 26, 0, 27, 21, 26, 0),
	gsSP2Triangles(27, 28, 21, 0, 29, 28, 27, 0),
	gsSP2Triangles(29, 30, 28, 0, 21, 28, 30, 0),
	gsSPVertex(fight_platform_spiner_mesh_layer_1_vtx_0 + 95, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(0, 3, 4, 0, 4, 3, 5, 0),
	gsSP2Triangles(5, 3, 6, 0, 6, 3, 7, 0),
	gsSP2Triangles(7, 3, 8, 0, 9, 8, 3, 0),
	gsSP2Triangles(9, 3, 10, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 12, 11, 0, 9, 11, 8, 0),
	gsSPEndDisplayList(),
};

Vtx fight_platform_spiner_mesh_layer_1_vtx_1[40] = {
	{{{267, 182, -105},0, {2211, 236},{0xA5, 0xA5, 0xA5, 0xA4}}},
	{{{113, 182, -259},0, {962, -1013},{0xBB, 0xBB, 0xBB, 0xFF}}},
	{{{-104, 182, -259},0, {-803, -1013},{0x8D, 0x8D, 0x8D, 0xFF}}},
	{{{-181, 182, -182},0, {-1428, -389},{0xB8, 0xB8, 0xB8, 0xFF}}},
	{{{-271, 182, 98},0, {-2160, 1894},{0xA5, 0xA5, 0xA5, 0xFF}}},
	{{{-271, 182, -92},0, {-2160, 344},{0x8D, 0x8D, 0x8D, 0xFF}}},
	{{{113, 182, 265},0, {962, 3251},{0xA5, 0xA5, 0xA5, 0xFF}}},
	{{{-104, 182, 265},0, {-803, 3251},{0xA5, 0xA5, 0xA5, 0xFF}}},
	{{{267, 182, 112},0, {2211, 2002},{0xBC, 0xBC, 0xBC, 0xFF}}},
	{{{-271, 49, 98},0, {12935, -5138},{0x35, 0x35, 0x35, 0xFF}}},
	{{{-104, 49, 265},0, {11579, -6494},{0x35, 0x35, 0x35, 0xFF}}},
	{{{113, 49, 265},0, {9813, -6494},{0x35, 0x35, 0x35, 0xFF}}},
	{{{267, 49, -105},0, {8564, -3480},{0x35, 0x35, 0x35, 0xFF}}},
	{{{267, 49, 112},0, {8564, -5245},{0x35, 0x35, 0x35, 0xFF}}},
	{{{-181, 49, -182},0, {12203, -2855},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-104, 49, -259},0, {11579, -2231},{0x18, 0x18, 0x18, 0xFF}}},
	{{{113, 49, -259},0, {9813, -2231},{0x35, 0x35, 0x35, 0xFF}}},
	{{{-271, 49, -92},0, {12935, -3587},{0x18, 0x18, 0x18, 0xFF}}},
	{{{-271, 182, -92},0, {2605, -1083},{0x8D, 0x8D, 0x8D, 0xFF}}},
	{{{-181, 49, -182},0, {3640, -2161},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-271, 49, -92},0, {2605, -2161},{0x18, 0x18, 0x18, 0xFF}}},
	{{{-181, 182, -182},0, {3640, -1083},{0xB8, 0xB8, 0xB8, 0xFF}}},
	{{{-104, 49, -259},0, {4523, -2161},{0x18, 0x18, 0x18, 0xFF}}},
	{{{-104, 182, -259},0, {4523, -1083},{0x8D, 0x8D, 0x8D, 0xFF}}},
	{{{113, 49, -259},0, {6289, -2161},{0x35, 0x35, 0x35, 0xFF}}},
	{{{113, 182, -259},0, {6289, -1083},{0xBB, 0xBB, 0xBB, 0xFF}}},
	{{{267, 182, -105},0, {8055, -1083},{0xA5, 0xA5, 0xA5, 0xA4}}},
	{{{267, 49, -105},0, {8055, -2161},{0x35, 0x35, 0x35, 0xFF}}},
	{{{267, 182, 112},0, {9821, -1083},{0xBC, 0xBC, 0xBC, 0xFF}}},
	{{{267, 49, 112},0, {9821, -2161},{0x35, 0x35, 0x35, 0xFF}}},
	{{{113, 49, 265},0, {11587, -2161},{0x35, 0x35, 0x35, 0xFF}}},
	{{{113, 182, 265},0, {11587, -1083},{0xA5, 0xA5, 0xA5, 0xFF}}},
	{{{113, 49, 265},0, {11587, -2161},{0x35, 0x35, 0x35, 0xFF}}},
	{{{113, 182, 265},0, {11587, -1083},{0xA5, 0xA5, 0xA5, 0xFF}}},
	{{{-104, 182, 265},0, {13352, -1083},{0xA5, 0xA5, 0xA5, 0xFF}}},
	{{{-104, 49, 265},0, {13352, -2161},{0x35, 0x35, 0x35, 0xFF}}},
	{{{-271, 49, 98},0, {15271, -2161},{0x35, 0x35, 0x35, 0xFF}}},
	{{{-271, 182, 98},0, {15271, -1083},{0xA5, 0xA5, 0xA5, 0xFF}}},
	{{{-271, 182, -92},0, {13200, -1128},{0x8D, 0x8D, 0x8D, 0xFF}}},
	{{{-271, 49, -92},0, {13165, -2193},{0x18, 0x18, 0x18, 0xFF}}},
};

Gfx fight_platform_spiner_mesh_layer_1_tri_1[] = {
	gsSPVertex(fight_platform_spiner_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 3, 5, 4, 0),
	gsSP2Triangles(4, 6, 0, 0, 4, 7, 6, 0),
	gsSP2Triangles(6, 8, 0, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 11, 13, 12, 0),
	gsSP2Triangles(12, 14, 9, 0, 12, 15, 14, 0),
	gsSP2Triangles(12, 16, 15, 0, 14, 17, 9, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
	gsSP2Triangles(22, 19, 21, 0, 22, 21, 23, 0),
	gsSP2Triangles(24, 22, 23, 0, 24, 23, 25, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
	gsSP2Triangles(28, 30, 29, 0, 28, 31, 30, 0),
	gsSPVertex(fight_platform_spiner_mesh_layer_1_vtx_1 + 32, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_fight_platform_OutsideSpikes_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, fight_platform_OutsideSpikes_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(fight_platform_OutsideSpikes_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_fight_platform_OutsideSpikes_f3d[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx mat_fight_platform_OutsideEdge_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, fight_platform_OutsideEdge_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(fight_platform_OutsideEdge_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_fight_platform_OutsideEdge_f3d[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx fight_platform_spiner_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(fight_platform_spiner_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_fight_platform_OutsideSpikes_f3d),
	gsSPDisplayList(fight_platform_spiner_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_fight_platform_OutsideSpikes_f3d),
	gsSPDisplayList(mat_fight_platform_OutsideEdge_f3d),
	gsSPDisplayList(fight_platform_spiner_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_fight_platform_OutsideEdge_f3d),
	gsSPEndDisplayList(),
};

Gfx fight_platform_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
