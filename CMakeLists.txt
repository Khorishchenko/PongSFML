CMAKE_MINIMUM_REQUIRED(VERSION 3.14.4)
PROJECT(PONG.out)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 ")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

include_directories(inc)

set(HEADER_FILES inc/pgh.h inc/GameObject.h inc/Ball.h inc/Game.h inc/GameObject.h inc/Paddle.h inc/MovableObject.h)
set(SOURCES src/main.cpp src/Menu.cpp src/Start.cpp src/Games.cpp src/Info.cpp src/GameObject.cpp src/Game.cpp src/Ball src/Paddle.cpp
    src/MovableObject.cpp src/IsMenu.cpp)

add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCES})

target_link_libraries(PONG.out sfml-graphics sfml-audio)