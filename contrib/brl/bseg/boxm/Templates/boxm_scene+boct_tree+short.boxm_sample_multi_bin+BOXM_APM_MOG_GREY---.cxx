#include <boxm/boxm_scene.txx>
#include <boct/boct_tree.h>
#include <boxm/boxm_sample_multi_bin.h>

typedef boct_tree<short, boxm_sample_multi_bin<BOXM_APM_MOG_GREY> >  tree_type;
BOXM_SCENE_INSTANTIATE(tree_type);
