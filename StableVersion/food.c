#include "snake.h"

void spawnFood(Food *food) {
    food->position.x = (rand() % (WINDOW_GAME_WIDTH / TILE_SIZE)) * TILE_SIZE;
    food->position.y = (rand() % (WINDOW_GAME_HEIGHT / TILE_SIZE)) * TILE_SIZE;
}

int checkFoodCollision(Snake *snake, Food *food) {
    return (snake->position[0].x == food->position.x && snake->position[0].y == food->position.y);
}

void drawFood(SDL_Renderer *renderer, Food *food, SDL_Texture *texture) {
    SDL_Rect rectfood = {food->position.x, food->position.y, 32, 32};
    SDL_Rect rect_img_food = {352,0,32, 32};
    SDL_RenderCopy(renderer, texture,&rect_img_food,&rectfood);
}

