cmake_minimum_required(VERSION 2.8)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

project(algo)
set(Boost_USE_MULTITHREADED ON)  
find_package(Boost COMPONENTS unit_test_framework-mt) 

add_definitions(-std=c++11)
include_directories(${CMAKE_SOURCE_DIR} ${Boost_INCLUDE_DIRS})

set(srcs inversion_count_test.cpp)
add_executable(test_${PROJECT_NAME}	${srcs})
target_link_libraries(test_${PROJECT_NAME} ${Boost_LIBRARIES})                                                                                                                                                                                                                            
