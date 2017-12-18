# project cmake_demo

show how to use cmake to maintain a project with more files

## struct of project:
cmake_demo is root project directory
all source files are in src/
src/
 |
  - main.cpp   [//] # (main file)

  - module1/   [//] # (example of source code organised in module in its own hierarchy)
   |
    -demo/      [//] # (source code of module)
    -include/   [//] # (include directory for module)
   |
    -demo/     [//] # (header files for module)

  - module2/   [//] # (example of source code organised in module in its own hierarchy)
   |
    -demo/      [//] # (source code of module)
    -include/   [//] # (include directory for module)
   |
    -demo/     [//] # (header files for module)

  -staticlib   [//] # (example of static lib)
   |
    -slib      [//] # (source code of libraty)
    -include   [//] # (include directory of library)
     |
      - slib   [//] # (header files of library)

  -dynamiclib   [//] # (example of ynamic lib)
   |
    -dlib      [//] # (source code of libraty)
    -include   [//] # (include directory of library)
     |
      - slib   [//] # (header files of library)


## example of usage cmake config file
There is a setup file for cmake in root project directory:
cmake_toolchain.cmake
in which you can customise some options

## example of usage
in root directory

mkdir build && cd $_       [//] # ($_ - bash extension to enter in just created directory)
cmake -C ../cmake_toolchain.cmake ..      [//] # (generate cmake project)
make [-j 4]
make install            [//] # (install project - prefix is set im main CmakeLists.txt - for example)

Enjoy :)

## TODO
1. make a separate project and write .cmake file for FindPackage
2. add more setup in cmake_toolchain.cmake



