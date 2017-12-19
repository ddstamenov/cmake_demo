add_subdirectory(demo)

# if variables are not CACHE INTERNAL "" FORCE they should be populated in every CMakeLists.txt
# populate variable upward: srcfiles includedirs
#SET(srcfiles ${srcfiles} PARENT_SCOPE)
#SET(includedirs ${includedirs} PARENT_SCOPE)
