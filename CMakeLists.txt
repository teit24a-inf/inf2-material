cmake_minimum_required(VERSION 3.10)

Include(FetchContent)

project("Informatik 2")

set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
add_compile_options(-Wall -Wextra -pedantic)
set(CMAKE_CXX_STANDARD 20)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)
FetchContent_MakeAvailable(Catch2)
find_package(Catch2 REQUIRED)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

include(cmake/test_functions.cmake)
include(CTest)
include(Catch)

add_subdirectory(src)

cmake_path(SET GITIGNORE_FILE NORMALIZE "${CMAKE_BINARY_DIR}/.gitignore")
file(WRITE ${GITIGNORE_FILE} "*")
