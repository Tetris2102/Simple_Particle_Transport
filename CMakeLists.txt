cmake_minimum_required(VERSION 3.12)
project(simple_particle_transport LANGUAGES CXX)

find_package(OpenMP REQUIRED)

set(PROJ_NAME simple_particle_transport)
set(CMAKE_CXX_STANDARD 23)

set(SOURCES
    src/particle.cpp    
    src/main.cpp
)

add_executable(${PROJ_NAME} ${SOURCES})

target_compile_options(${PROJ_NAME} PRIVATE -O2)

target_include_directories(${PROJ_NAME} PUBLIC include src)

if(OpenMP_CXX_FOUND)
    target_link_libraries(${PROJ_NAME} PUBLIC OpenMP::OpenMP_CXX)
endif()
