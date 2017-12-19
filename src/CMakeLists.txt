
SET(srcfiles main.cpp CACHE INTERNAL "" FORCE)
# if set in this way it should be populate in all CMakeLists.txt files in every subdirectory
# SET (srcfiles main.cpp)

add_subdirectory(module1)

# condition use of module2
message ("WITH_MODULE2: ${WITH_MODULE2}")
if(DEFINED WITH_MODULE2 )
   if(${WITH_MODULE2} STREQUAL "ON" )
      add_subdirectory(module2)
      add_definitions(-DUSE_MODULE2)
   endif()
endif()

# add subdirectory for static library
add_subdirectory(staticlib)

# add subdirectory for dynamic library
add_subdirectory(dynamiclib)

# Set needed RPATH for built shared libraries
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

add_executable(demo ${srcfiles})

target_include_directories(demo PUBLIC ${includedirs})

target_link_libraries(demo 
   # link dynamic library
   dlib

   # link static library
   slib
   )

INSTALL(TARGETS demo DESTINATION bin)

