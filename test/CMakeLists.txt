project(test)

enable_testing() 
add_executable(test main.cpp simple.cpp fixture.cpp footest.cpp)
target_link_libraries(test PRIVATE gtest gmock foo)
add_test(NAME ctest COMMAND test)