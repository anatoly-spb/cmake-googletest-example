project(foo)
add_library(foo foo.cpp ${CMAKE_SOURCE_DIR}/include/foo/foo.h)
target_link_libraries(foo PRIVATE boo)
target_include_directories(foo PUBLIC ${CMAKE_SOURCE_DIR}/include)
