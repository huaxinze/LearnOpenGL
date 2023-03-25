#include "src/2.lighting/1.colors/colors.h"
#include "src/2.lighting/2.2.basic_lighting_specular/basic_lighting_specular.h"
#include "src/2.lighting/3.1.materials/materials.h"
#include "src/2.lighting/4.1.lighting_maps_diffuse_map/lighting_maps_diffuse.h"
#include "src/2.lighting/4.2.lighting_maps_specular_map/lighting_maps_specular.h"
#include "src/2.lighting/5.1.light_casters_directional/light_casters_directional.h"
#include "src/3.model_loading/model_loading.h"
#include "src/4.advanced_opengl/2.stencil_testing/stencli_testing.h"
#include "src//4.advanced_opengl/3.1.blending_discard/blending_discard.h"
#include "src/4.advanced_opengl/3.2.blending_sort/blending_sorted.h"
#include "src/4.advanced_opengl/5.1.framebuffers/framebuffers.h"
#include "src/4.advanced_opengl/6.1.cubemaps_skybox/cubemaps_skybox.h"

int main()
{
    // colors_entry();
    // basic_lighting_specular_entry();
    // materials_entry();
    // lighting_maps_diffuse_entry();
    // lighting_maps_specular_entry();
    // light_casters_directional_entry();
    // model_loading_entry();
    // stencil_testing_entry();
    // blending_discard_entry();
    // blending_sort_entry();
    // framebuffers_entry();
    cubemaps_skybox_entry();
    return 0;
}
