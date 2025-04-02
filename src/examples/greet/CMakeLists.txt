add_executable(greet main.cpp greeting.cpp)

add_executable(greeting_tests greeting_tests.cpp greeting.cpp)
target_link_libraries(greeting_tests Catch2::Catch2WithMain)

catch_discover_tests(greeting_tests)
