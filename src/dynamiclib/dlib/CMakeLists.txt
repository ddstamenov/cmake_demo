
set(includedlibdirs ${CMAKE_SOURCE_DIR}/src/dynamiclib/include)

add_library(dlib SHARED dlibFile.cpp)

target_include_directories(dlib PUBLIC ${includedlibdirs})

SET(includedirs ${includedirs} ${includedlibdirs} CACHE INTERNAL "" FORCE)

INSTALL (TARGETS dlib DESTINATION lib)
#copy shared library header files
INSTALL (DIRECTORY ${CMAKE_SOURCE_DIR}/src/dynamiclib/include/dlib DESTINATION include)
