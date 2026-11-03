cmake_minimum_required(VERSION 3.15)
project(SpaceInvaders VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Descargar e integrar Raylib automáticamente mediante FetchContent
include(FetchContent)
FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/6.2.tar.gz
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
set(CMAKE_POLICY_VERSION_MINIMUM 3.5)

FetchContent_MakeAvailable(raylib)
# Tu ejecutable y enlace con Raylib
add_executable(SpaceInvaders 
    src/main.cpp 
    src/spaceship.cpp
    src/game.cpp
)
target_link_libraries(SpaceInvaders PRIVATE raylib)

# Corrección necesaria para plataformas Windows en modo gráfico
if(WIN32)
    target_link_libraries(SpaceInvaders PRIVATE winmm gdi32)
endif()

# Copiar la carpeta Graphics al directorio de compilación automáticamente
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/Graphics DESTINATION ${CMAKE_CURRENT_BINARY_DIR})