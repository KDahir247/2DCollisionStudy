cmake_minimum_required(VERSION 3.17)
project(Math)

set(LIB_DIRECTORY ${PROJECT_SOURCE_DIR}/Intersections)

set(CMAKE_CXX_STANDARD 17)

add_library(Math main.cpp
        Intersections/StaticIntersection.cpp
        CollisionArea/CollisionArea.cpp
        CollisionNormal/CollisionNormal.cpp
        CollisionTest/CollisionTest.cpp
        StaticCollision/StaticCollision.cpp)