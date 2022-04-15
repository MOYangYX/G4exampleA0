
cmake_minimum_required(VERSION 2.6)
project(A0)

find_package(Geant4 REQUIRED)

include(${Geant4_USE_FILE})
include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)
file(GLOB header ${PROJECT_SOURCE_DIR}/include/*.hh)

add_executable(A0 A0.cc ${sources} ${header})
target_link_libraries(A0 ${Geant4_LIBRARIES})