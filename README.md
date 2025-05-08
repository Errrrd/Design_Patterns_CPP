This repository was created for the course: https://www.udemy.com/course/patterns-cplusplus
IDE - Visual Studio Code.
0) Installed Visual Studio Code. Added extensions: C/C++ Extention Pack, CMake Tools. Installed MSYS2 for GCC/G++ compillers. Added "bin" to system Environment variable "PATH" (e.g. "Path" -> "C:\msys64\ucrt64\bin").
1) Added Boost with last tag (e.g. "boost-1.88.0") as a submodule. Executed bootstrap.bat to generating b2.exe, executed b2.exe for generating "boost/boost" folder with headers.
2) Download and install CMake to a standard or custom folder (https://cmake.org/download/). Add to the "PATH" in the system variables "CMake\bin" directory (e.g. "E:\_LIBS\CMake\bin").

Lesson 1 (3. Single Responsibility Principle)
=======================================================================================
Created folder "SingleResponsPrinciple", initialized code with CMake via CMake: Quick Start (here is description https://code.visualstudio.com/docs/cpp/CMake-linux, project name is "SingleResponsPrinciple" ).
Added next lines for including of Boost libs (looking for SingleResponsPrinciple\CMakeList.txt):
	set(Boost_INCLUDE_DIRS "../boost")
	...
	# Include the Boost headers
	include_directories(${Boost_INCLUDE_DIRS})
	...
	# Link the Boost libraries
	target_link_libraries(SingleResponsPrinciple ${Boost_LIBRARIES})
Added "#include <boost/lexical_cast.hpp>" to main.cpp (for checking of the boost including). Checked: build, run.

Listened lesson, made code...
=======================================================================================

