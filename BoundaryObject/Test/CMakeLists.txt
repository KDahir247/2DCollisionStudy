cmake_minimum_required(VERSION 3.17)
project(Test)

set(CMAKE_CXX_STANDARD 17)
set(GOOGLE_TEST_INCLUDE ../Middleware/googletest/googletest)

set(INTERSECTION_INCLUDE ${PROJECT_SOURCE_DIR}/../Math/Intersections)
set(COLLISIONAREA_INCLUDE ${PROJECT_SOURCE_DIR}/../Math/CollisionArea)
set(COLLISIONNORMAL_INCLUDE ${PROJECT_SOURCE_DIR}/../Math/CollisionNormal)

include_directories(Test ${GOOGLE_TEST_INCLUDE})
include_directories(Test ${GOOGLE_TEST_INCLUDE}/include)
include_directories(Test ${PROJECT_SOURCE_DIR}/../Math )


set(TEST_FILE
        MathTests/Vector2DTests.cpp
        MathTests/Point2DTests.cpp
        MathTests/Line2DTests.cpp
        MathTests/HLine2DTests.cpp
        CollisionTests/Collision2DTests1.cpp
        MathTests/VLine2DTests.cpp
        MathTests/Ray2DTests.cpp
        MathTests/Segment2DTests.cpp MathTests/AABB2DTests.cpp)

set(LIB_DEPENDENCY ${PROJECT_SOURCE_DIR}/../Math/cmake-build-debug)
message(${LIB_DEPENDENCY}/Math.lib)
add_executable(Test main.cpp gtest-all.cc ${TEST_FILE})
target_link_libraries(Test ${PROJECT_SOURCE_DIR}/../Math/cmake-build-debug/Math.lib)