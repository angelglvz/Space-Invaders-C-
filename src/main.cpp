#include "raylib.h"

int main() {
    // Inicializar ventana de 800x600 píxeles
    InitWindow(800, 600, "Space Invaders - Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("¡Raylib configurado con exito!", 250, 280, 20, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}