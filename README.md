# 👾 Space Invaders C++

Un clon del clásico juego de arcade **Space Invaders**, desarrollado en C++ desde cero. Este repositorio está concebido como un proyecto de práctica y aprendizaje para afianzar conceptos clave de programación de sistemas, arquitectura de software en C++ y desarrollo de videojuegos 2D.

---

## 🎯 Objetivo del Proyecto

El propósito principal de este repositorio es aplicar y consolidar buenas prácticas de desarrollo en C++ moderno a través de un proyecto práctico, interactivo y autónomo.

### Objetivos de Aprendizaje:
* **C++ Moderno & POO:** Aplicación práctica de clases, herencia, polimorfismo, gestión de memoria y punteros (smart pointers).
* **Game Loop & Renderizado:** Implementación del ciclo principal del juego (*Game Loop*), control de FPS, detección de colisiones e ingreso de eventos por teclado.
* **Diseño de Arquitectura:** Estructuración limpia del proyecto separando lógica de juego, entidades (nave, enemigos, proyectiles) y la capa de renderizado gráfico.

---

## 🛠️ Tecnologías y Herramientas

* **Lenguaje:** C++ (C++17 / C++20)
* **Biblioteca Gráfica:** *[Indica aquí la biblioteca que uses, ej: SFML / SDL2 / Raylib]*
* **Sistema de Compilación:** CMake
* **Control de Versiones:** Git

---

## 🎮 Características del Juego

- [x] Nave del jugador con movimiento horizontal y disparo.
- [x] Oleadas de enemigos con movimiento colectivo y descenso progresivo.
- [x] Sistema de proyectiles y gestión de colisiones (Jugador ↔ Proyectil enemigo, Enemigo ↔ Proyectil jugador).
- [x] Pantallas de inicio, *Game Over* y puntuación.
- [ ] Barricadas/Escudos destructibles *(en proceso)*.
- [ ] Sistema de vidas y puntuación (*High Score*) *(en proceso)*.

---

## 🚀 Cómo Empezar

### Prerrequisitos

Asegúrate de tener instalados los siguientes componentes en tu sistema:

- Compilador de C++ con soporte para C++17 o superior (`g++`, `clang` o `MSVC`).
- **CMake** (v3.15 o superior).
- Las dependencias de la biblioteca gráfica elegida (*[SFML / SDL2 / Raylib]*).

### Clonar y Compilar

1. **Clonar el repositorio:**
   ```bash
   git clone [https://github.com/tu-usuario/space-invaders-c-.git](https://github.com/tu-usuario/space-invaders-C-.git)
   cd space-invaders-cpp