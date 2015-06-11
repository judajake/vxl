#ifndef boxm2_cpp_processes_h_
#define boxm2_cpp_processes_h_

#include <bprb/bprb_func_process.h>
#include <bprb/bprb_macros.h>

//the init functions
DECLARE_FUNC_CONS(boxm2_cpp_render_expected_image_process);
DECLARE_FUNC_CONS(boxm2_cpp_render_cone_expected_image_process);
DECLARE_FUNC_CONS(boxm2_cpp_update_image_process);
DECLARE_FUNC_CONS(boxm2_cpp_cone_update_image_process);
DECLARE_FUNC_CONS(boxm2_cpp_refine_process2);
DECLARE_FUNC_CONS(boxm2_cpp_change_detection_process2);
DECLARE_FUNC_CONS(boxm2_cpp_query_cell_data_process);
DECLARE_FUNC_CONS(boxm2_cpp_render_expected_image_process);
DECLARE_FUNC_CONS(boxm2_cpp_render_expected_depth_process);
DECLARE_FUNC_CONS(boxm2_cpp_render_depth_of_max_prob_process);
DECLARE_FUNC_CONS(boxm2_cpp_cast_intensities_process);
DECLARE_FUNC_CONS(boxm2_cpp_mean_intensities_batch_process);
DECLARE_FUNC_CONS(boxm2_cpp_mean_intensities_print_process);
DECLARE_FUNC_CONS(boxm2_cpp_create_norm_intensities_process);
DECLARE_FUNC_CONS(boxm2_cpp_data_print_process);
DECLARE_FUNC_CONS(boxm2_cpp_filter_process);
DECLARE_FUNC_CONS(boxm2_cpp_compute_derivative_process);
DECLARE_FUNC_CONS(boxm2_cpp_filter_response_process);

DECLARE_FUNC_CONS(boxm2_cpp_vis_of_point_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_probe_intensities_process);
DECLARE_FUNC_CONS(boxm2_cpp_ray_probe_process);
DECLARE_FUNC_CONS(boxm2_cpp_ray_app_density_process);
DECLARE_FUNC_CONS(boxm2_cpp_create_aux_data_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_update_process);

DECLARE_FUNC_CONS(boxm2_cpp_batch_compute_shadow_model_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_update_nonsurface_model_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_compute_phong_model_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_compute_synoptic_function_1d_process);
DECLARE_FUNC_CONS(boxm2_cpp_query_cell_brdf_process);
DECLARE_FUNC_CONS(boxm2_cpp_pre_infinity_opt2_phongs_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_update_opt2_phongs_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_update_nonray_process);
DECLARE_FUNC_CONS(boxm2_cpp_render_z_images_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_compute_normal_albedo_process);

DECLARE_FUNC_CONS(boxm2_cpp_create_aux_data_opt2_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_update_opt2_process);
DECLARE_FUNC_CONS(boxm2_cpp_image_density_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_update_app_process);
DECLARE_FUNC_CONS(boxm2_cpp_batch_update_alpha_process);

DECLARE_FUNC_CONS(boxm2_cpp_merge_process);

DECLARE_FUNC_CONS(boxm2_cpp_update_with_shadow_process);
DECLARE_FUNC_CONS(boxm2_cpp_image_density_masked_process);
DECLARE_FUNC_CONS(boxm2_cpp_update_using_quality_process);
DECLARE_FUNC_CONS(boxm2_cpp_points_to_volume_process);

DECLARE_FUNC_CONS(boxm2_export_stack_images_process);
DECLARE_FUNC_CONS(boxm2_cpp_create_mog_image_process);
DECLARE_FUNC_CONS(boxm2_cpp_los_visibility_process);

DECLARE_FUNC_CONS(boxm2_cpp_normals_to_id_process);

DECLARE_FUNC_CONS(boxm2_import_triangle_mesh_process);
#endif
