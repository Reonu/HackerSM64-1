#include "src/game/envfx_snow.h"

const GeoLayout vcutm_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 7168, 336, 16670),
		GEO_OPEN_NODE(),
			GEO_OPEN_NODE(),
				GEO_ASM(  0, geo_render_mirror_mario),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_001_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_002_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_003_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_004_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_005_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_006_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_007_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_008_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_009_mesh_layer_5),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_010_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_011_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_012_mesh_layer_4),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_013_mesh_layer_4),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_014_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5080, -254, -3359, 0, -90, 0, vcutm_dl_Chireiden_Nitori_015_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout vcutm_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_PURPLE_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, -7538, -348, -8936, -7538, -448, -8936, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, vcutm_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, vcutm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, vcutm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
