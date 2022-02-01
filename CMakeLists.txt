cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(PARSING VERSION 1.0)

add_library(sensor STATIC lib/sensor.cpp lib/sensor.h)
target_include_directories(sensor PUBLIC lib)
target_compile_features(sensor PUBLIC cxx_std_17)

add_library(sensorsList STATIC lib/sensorsList.cpp lib/sensorsList.h)
target_include_directories(sensorsList PUBLIC lib)
target_compile_features(sensorsList PUBLIC cxx_std_17)

add_executable(main main.cpp)
add_executable(test test.cpp)

target_link_libraries(sensorsList sensor) 
target_link_libraries(main PUBLIC sensor sensorsList)
