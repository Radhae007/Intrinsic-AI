#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "aic_scoring::aic_scoring" for configuration ""
set_property(TARGET aic_scoring::aic_scoring APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(aic_scoring::aic_scoring PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libaic_scoring.so"
  IMPORTED_SONAME_NOCONFIG "libaic_scoring.so"
  )

list(APPEND _cmake_import_check_targets aic_scoring::aic_scoring )
list(APPEND _cmake_import_check_files_for_aic_scoring::aic_scoring "${_IMPORT_PREFIX}/lib/libaic_scoring.so" )

# Import target "aic_scoring::scoring_tier1_main" for configuration ""
set_property(TARGET aic_scoring::scoring_tier1_main APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(aic_scoring::scoring_tier1_main PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/aic_scoring/scoring_tier1_main"
  )

list(APPEND _cmake_import_check_targets aic_scoring::scoring_tier1_main )
list(APPEND _cmake_import_check_files_for_aic_scoring::scoring_tier1_main "${_IMPORT_PREFIX}/lib/aic_scoring/scoring_tier1_main" )

# Import target "aic_scoring::scoring_tier2_main" for configuration ""
set_property(TARGET aic_scoring::scoring_tier2_main APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(aic_scoring::scoring_tier2_main PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/aic_scoring/scoring_tier2_main"
  )

list(APPEND _cmake_import_check_targets aic_scoring::scoring_tier2_main )
list(APPEND _cmake_import_check_files_for_aic_scoring::scoring_tier2_main "${_IMPORT_PREFIX}/lib/aic_scoring/scoring_tier2_main" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
