add_executable(question_tests question_tests.cpp question.cpp question.h)
target_link_libraries(question_tests Catch2::Catch2WithMain)
catch_discover_tests(question_tests)
