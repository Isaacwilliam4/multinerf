# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "colmap_sources_autogen"
  "src/colmap/controllers/colmap_controllers_autogen"
  "src/colmap/estimators/colmap_estimators_autogen"
  "src/colmap/exe/colmap_exe_autogen"
  "src/colmap/exe/colmap_main_autogen"
  "src/colmap/feature/colmap_feature_autogen"
  "src/colmap/geometry/colmap_geometry_autogen"
  "src/colmap/image/colmap_image_autogen"
  "src/colmap/math/colmap_math_autogen"
  "src/colmap/mvs/colmap_mvs_autogen"
  "src/colmap/optim/colmap_optim_autogen"
  "src/colmap/retrieval/colmap_retrieval_autogen"
  "src/colmap/scene/colmap_scene_autogen"
  "src/colmap/sensor/colmap_sensor_autogen"
  "src/colmap/sfm/colmap_sfm_autogen"
  "src/colmap/ui/colmap_ui_autogen"
  "src/colmap/util/colmap_util_autogen"
  "src/thirdparty/LSD/colmap_lsd_autogen"
  "src/thirdparty/PoissonRecon/colmap_poisson_recon_autogen"
  "src/thirdparty/SiftGPU/colmap_sift_gpu_autogen"
  "src/thirdparty/VLFeat/colmap_vlfeat_autogen"
  )
endif()
