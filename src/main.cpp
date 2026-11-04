#include "raylib.h"
#include "game.hpp"

//colores
Color grey = {29, 29, 27, 255};

int main() {

    //configuramos tamaño de pantalla en pixeles
    const int window_width = 750;
    const int window_height = 700;

    InitWindow(window_width, window_height, "Space Invaders - Raylib");
    SetTargetFPS(60);

    Game game;

    while (!WindowShouldClose()) {

        game.HandleInput();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        game.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}