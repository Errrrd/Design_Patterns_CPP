cmake_minimum_required(VERSION 3.10.0)
project(SingleResponsPrinciple VERSION 0.1.0 LANGUAGES C CXX)

set(Boost_INCLUDE_DIRS "../boost")

# Include the Boost headers
include_directories(${Boost_INCLUDE_DIRS})

add_executable(SingleResponsPrinciple main.cpp)

# Link the Boost libraries
target_link_libraries(SingleResponsPrinciple ${Boost_LIBRARIES})

include(CTest)
enable_testing()

