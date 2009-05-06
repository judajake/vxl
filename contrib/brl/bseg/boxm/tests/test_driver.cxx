#include <testlib/testlib_register.h>

DECLARE( test_binary_io );
DECLARE( test_block_iter );
DECLARE( test_block_vis_graph );
DECLARE( test_cell_vis_graph );
DECLARE( test_quad_interpolate );
DECLARE( test_save_raw );
DECLARE( test_render_image );
DECLARE( test_update );
DECLARE( test_compute_visibility );
DECLARE( test_update_multi_bin );


void register_tests()
{
  REGISTER( test_binary_io );
  REGISTER( test_block_iter );
  REGISTER( test_block_vis_graph );
  REGISTER( test_cell_vis_graph );
  REGISTER( test_quad_interpolate );
  REGISTER( test_save_raw );
  REGISTER( test_render_image );
  REGISTER( test_update );
  REGISTER( test_compute_visibility );
  REGISTER( test_update_multi_bin );

}


DEFINE_MAIN;
