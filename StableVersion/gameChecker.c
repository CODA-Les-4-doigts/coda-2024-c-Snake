#include "snake.h"

//Retourne vrai si le serpent prend tout le terain (aucune case n'est vide en gros)
// /!\ En revanche attention à ne pas oublié de compté la tete
bool isWin(int snakeLen) {
    return snakeLen == WINDOW_WIDTH * WINDOW_HEIGHT;
}

bool isCollision(Snake *snake) {
    // Collision avec les bords
    if (snake->position[0].x < 0 || snake->position[0].x >= WINDOW_WIDTH ||
        snake->position[0].y < 0 || snake->position[0].y >= WINDOW_HEIGHT) {
        return true;
        }

    // Collision avec soi-même
    for (int i = 1; i < snake->length; i++) {
        if (snake->position[0].x == snake->position[i].x &&
            snake->position[0].y == snake->position[i].y) {
            return true;
            }
    }
    return false;
}