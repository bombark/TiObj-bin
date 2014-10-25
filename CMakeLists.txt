cmake_minimum_required (VERSION 2.6) 
project (TiObj-bin) 

#find_package(tiobj)
#find_package(tiarg)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x -O2")


add_executable (tiobj.read   src/tiobj-read.cpp) 
add_executable (tiobj.select src/tiobj-select.cpp) 
add_executable (foreach      src/tiforeach.cpp) 

target_link_libraries (tiobj.read   tiobj tiarg) 
target_link_libraries (tiobj.select tiobj) 
target_link_libraries (foreach tiobj) 

install(TARGETS tiobj.read   DESTINATION bin)
install(TARGETS tiobj.select DESTINATION bin)
install(TARGETS foreach      DESTINATION bin)
