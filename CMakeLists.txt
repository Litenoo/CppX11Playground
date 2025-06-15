cmake_minimum_required(VERSION 3.10)
project(SimpleX11App)

set(CMAKE_C_STANDARD 11)  # since the example is C

add_executable(${PROJECT_NAME} src/main.cpp)  # or your filename

# Link the X11 library
find_package(X11 REQUIRED)
target_include_directories(${PROJECT_NAME} PRIVATE ${X11_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE ${X11_LIBRARIES})
