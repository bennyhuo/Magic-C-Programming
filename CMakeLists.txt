cmake_minimum_required(VERSION 3.10)
project(HelloC C)

set(CMAKE_C_STANDARD 99)

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    get_filename_component(name_wle ${file} NAME_WLE)
    file(GLOB sub_files "${CMAKE_CURRENT_SOURCE_DIR}/${name_wle}/*.c")
    add_executable(${name} ${file} ${sub_files})
endforeach()