
set(includeslibdirs ${CMAKE_SOURCE_DIR}/src/staticlib/include)

add_library(slib STATIC slibFile.cpp)

target_include_directories(slib PUBLIC ${includeslibdirs})

SET(includedirs ${includedirs} ${includeslibdirs} CACHE INTERNAL "" FORCE)

INSTALL (TARGETS slib DESTINATION lib)
#copy shared library header files
INSTALL (DIRECTORY ${CMAKE_SOURCE_DIR}/src/staticlib/include/slib DESTINATION include)
