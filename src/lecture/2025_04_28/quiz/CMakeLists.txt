add_executable(quiz_tests quiz_tests.cpp quiz.cpp quiz.h)
target_link_libraries(quiz_tests Catch2::Catch2WithMain)
catch_discover_tests(quiz_tests)
