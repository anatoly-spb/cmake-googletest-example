add_library(boo boo.cpp ${CMAKE_SOURCE_DIR}/include/boo/boo.h)
target_include_directories(boo PUBLIC ${CMAKE_SOURCE_DIR}/include)

