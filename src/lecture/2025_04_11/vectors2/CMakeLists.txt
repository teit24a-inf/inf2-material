add_executable(vectors2 vectors2.cpp)
add_custom_target(run_vectors2 command ${CMAKE_CURRENT_BINARY_DIR}/vectors2 DEPENDS vectors2)
