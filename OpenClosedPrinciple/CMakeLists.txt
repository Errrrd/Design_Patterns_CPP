cmake_minimum_required(VERSION 3.10.0)
project(OpenClosedPrinciple VERSION 0.1.0 LANGUAGES C CXX)

#Set source as variable
set(SOURCE "./main.cpp")

#Set path to boost submodule
#set(Boost_INCLUDE_DIRS "../boost")

# Include the Boost headers
#include_directories(${Boost_INCLUDE_DIRS})


add_executable(${PROJECT_NAME}  ${SOURCE})

# Link the Boost libraries
#target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})


include(CTest)
enable_testing()

