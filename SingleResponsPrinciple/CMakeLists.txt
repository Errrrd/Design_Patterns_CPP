cmake_minimum_required(VERSION 3.10.0)
project(SingleResponsPrinciple VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCE ./main.cpp)
set(BOOST_ROOT "../boost")

add_executable(${PROJECT_NAME} ${SOURCE})

include(CTest)
enable_testing()

