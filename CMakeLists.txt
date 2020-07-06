cmake_minimum_required(VERSION 3.5)

project(LibConvert LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(source/ sources)
add_library(LibConvert STATIC
    ${sources}
)
