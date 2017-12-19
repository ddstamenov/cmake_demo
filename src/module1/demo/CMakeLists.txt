
SET(includedirs ${includedirs} ${CMAKE_SOURCE_DIR}/src/module1/include CACHE INTERNAL "" FORCE)
SET(srcfiles ${srcfiles} ${CMAKE_CURRENT_SOURCE_DIR}/fileMod1.cpp CACHE INTERNAL "" FORCE)


# if variables are not CACHE INTERNAL "" FORCE they should be populated in every CMakeLists.txt
#SET(includedirs ${includedirs} ${CMAKE_SOURCE_DIR}/src/module1/include PARENT_SCOPE)
#SET(srcfiles ${srcfiles} ${CMAKE_CURRENT_SOURCE_DIR}/fileMod1.cpp PARENT_SCOPE)

