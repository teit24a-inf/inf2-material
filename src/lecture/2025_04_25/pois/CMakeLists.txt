add_executable(poi_tests poi_tests.cpp poi.cpp poi.h)
target_link_libraries(poi_tests Catch2::Catch2WithMain)
catch_discover_tests(poi_tests)
