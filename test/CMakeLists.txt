project(test)

add_executable(tests main.cpp simple.cpp fixture.cpp footest.cpp)
target_link_libraries(tests PRIVATE gtest gmock foo)
add_test(NAME ctests COMMAND tests)