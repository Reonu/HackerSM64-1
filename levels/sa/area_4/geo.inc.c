#include "src/game/envfx_snow.h"

const GeoLayout sa_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0x00, geo_render_INFBG),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 576, 1171, -20584),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -29, -1868, -13, 0, 90, -90, sa_dl_CCCCcannon_001_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 562, -656, -5584, sa_dl_EndArea3Visual_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, sa_dl_EndArea3Visual_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 542, -1798, -14399, sa_dl_Plane_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 542, -1798, -16229, sa_dl_Plane_003_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 562, -656, -5240),
		GEO_OPEN_NODE(),
			GEO_SCALE_WITH_DL(LAYER_OPAQUE, 50518, sa_dl_Plane_006_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sa_dl_Plane_006_mesh_layer_5),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, sa_dl_Plane_006_mesh_layer_6),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 562, -656, -5851, sa_dl_Plane_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 7508, -3278, -15038, sa_dl_ZZZ_Background_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sa_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, -300000, 0, -100, -300000, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, sa_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sa_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, sa_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sa_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, sa_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
