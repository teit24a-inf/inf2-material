add_executable(find_lists find_lists.cpp main.cpp)
add_custom_target(run_find_lists command ${CMAKE_CURRENT_BINARY_DIR}/find_lists DEPENDS find_lists)

add_executable(find_lists_tests find_lists_tests.cpp find_lists.cpp)
target_link_libraries(find_lists_tests Catch2::Catch2WithMain)
catch_discover_tests(find_lists_tests)
