# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Test.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Test.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Test.dir\flags.make

CMakeFiles\Test.dir\main.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\main.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\main.cpp
<<

CMakeFiles\Test.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\main.cpp
<<

CMakeFiles\Test.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\main.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\main.cpp
<<

CMakeFiles\Test.dir\gtest-all.cc.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\gtest-all.cc.obj: ..\gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Test.dir/gtest-all.cc.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\gtest-all.cc.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\gtest-all.cc
<<

CMakeFiles\Test.dir\gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/gtest-all.cc.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\gtest-all.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\gtest-all.cc
<<

CMakeFiles\Test.dir\gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/gtest-all.cc.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\gtest-all.cc.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\gtest-all.cc
<<

CMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.obj: ..\MathTests\Vector2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Test.dir/MathTests/Vector2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Vector2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/Vector2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Vector2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/Vector2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Vector2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Point2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\Point2DTests.cpp.obj: ..\MathTests\Point2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Test.dir/MathTests/Point2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\Point2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Point2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Point2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/Point2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\Point2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Point2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Point2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/Point2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\Point2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Point2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Line2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\Line2DTests.cpp.obj: ..\MathTests\Line2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Test.dir/MathTests/Line2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\Line2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Line2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Line2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/Line2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\Line2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Line2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Line2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/Line2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\Line2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Line2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.obj: ..\MathTests\HLine2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Test.dir/MathTests/HLine2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\HLine2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/HLine2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\HLine2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/HLine2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\HLine2DTests.cpp
<<

CMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.obj: ..\CollisionTests\Collision2DTests1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Test.dir/CollisionTests/Collision2DTests1.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\CollisionTests\Collision2DTests1.cpp
<<

CMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/CollisionTests/Collision2DTests1.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\CollisionTests\Collision2DTests1.cpp
<<

CMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/CollisionTests/Collision2DTests1.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\CollisionTests\Collision2DTests1.cpp
<<

CMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.obj: ..\MathTests\VLine2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Test.dir/MathTests/VLine2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\VLine2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/VLine2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\VLine2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/VLine2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\VLine2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.obj: ..\MathTests\Ray2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Test.dir/MathTests/Ray2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Ray2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/Ray2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Ray2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/Ray2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Ray2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.obj: ..\MathTests\Segment2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Test.dir/MathTests/Segment2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Segment2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/Segment2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Segment2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/Segment2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\Segment2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.obj: CMakeFiles\Test.dir\flags.make
CMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.obj: ..\MathTests\AABB2DTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Test.dir/MathTests/AABB2DTests.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.obj /FdCMakeFiles\Test.dir\ /FS -c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\AABB2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MathTests/AABB2DTests.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe > CMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\AABB2DTests.cpp
<<

CMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MathTests/AABB2DTests.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.s /c C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\MathTests\AABB2DTests.cpp
<<

# Object files for target Test
Test_OBJECTS = \
"CMakeFiles\Test.dir\main.cpp.obj" \
"CMakeFiles\Test.dir\gtest-all.cc.obj" \
"CMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.obj" \
"CMakeFiles\Test.dir\MathTests\Point2DTests.cpp.obj" \
"CMakeFiles\Test.dir\MathTests\Line2DTests.cpp.obj" \
"CMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.obj" \
"CMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.obj" \
"CMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.obj" \
"CMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.obj" \
"CMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.obj" \
"CMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.obj"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test.exe: CMakeFiles\Test.dir\main.cpp.obj
Test.exe: CMakeFiles\Test.dir\gtest-all.cc.obj
Test.exe: CMakeFiles\Test.dir\MathTests\Vector2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\MathTests\Point2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\MathTests\Line2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\MathTests\HLine2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\CollisionTests\Collision2DTests1.cpp.obj
Test.exe: CMakeFiles\Test.dir\MathTests\VLine2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\MathTests\Ray2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\MathTests\Segment2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\MathTests\AABB2DTests.cpp.obj
Test.exe: CMakeFiles\Test.dir\build.make
Test.exe: ..\..\Math\cmake-build-debug\Math.lib
Test.exe: CMakeFiles\Test.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable Test.exe"
	"C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Test.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1426~1.288\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Test.dir\objects1.rsp @<<
 /out:Test.exe /implib:Test.lib /pdb:C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\Test.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  ..\..\Math\cmake-build-debug\Math.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Test.dir\build: Test.exe

.PHONY : CMakeFiles\Test.dir\build

CMakeFiles\Test.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Test.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Test.dir\clean

CMakeFiles\Test.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug C:\Users\kdahi\OneDrive\Documents\Clion\AABB\CollisionStudy\BoundaryObject\Test\cmake-build-debug\CMakeFiles\Test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Test.dir\depend

