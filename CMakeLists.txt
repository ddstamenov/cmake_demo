# example of cmake features
# 
# show how to compile source file from different directories (module1, module2)
#
# set install prefix in CMakeLists.txt - just to show how it is possible

cmake_minimum_required(VERSION 3.5)

# enable C++11
set(CMAKE_CXX_STANDARD 11)

# just to show usability
# regular case is to be passed outside:
# cmake <path_to_source> -DCMAKE_INSTALL_PREFIX=$HOME/test_install
set(CMAKE_INSTALL_PREFIX "$ENV{HOME}/test_install" CACHE INTERNAL "" FORCE)

project(Demo_cmake)

add_subdirectory(src)
