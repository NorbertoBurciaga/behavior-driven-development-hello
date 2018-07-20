# src is an "include" directory because Hello.h is used in HelloBDDSteps.cpp
include_directories(${CMAKE_SOURCE_DIR}/src)

# create HelloBDDSteps executable: compile HelloBDDSteps.cpp and link it with cucumber-cpp googletest and $
add_executable(HelloBDDSteps step_definitions/HelloBDDSteps)
target_link_libraries(HelloBDDSteps HelloBDD cucumber-cpp GTest::GTest ${Boost_LIBRARIES})
