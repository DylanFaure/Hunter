/*
** EPITECH PROJECT, 2019
** put_gyarados.c
** File description:
** put gyarados
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void put_gyarados(sfRenderWindow *window, sfSprite *s_gyarados,
                    sfClock *clock, sfEvent event)
{
    static int xrect = 0;
    static int y = 100;
    static float vitesse = 0;

    vitesse = vitesse + 0.003;
    sfSprite_setTextureRect(s_gyarados, (sfIntRect){xrect, 232, 168, 116});
    sfSprite_move(s_gyarados, (sfVector2f){vitesse, 0});
    if (sfSprite_getPosition(s_gyarados).x > 1920) {
        sfSprite_setPosition(s_gyarados, (sfVector2f){-168, y});
        y = (rand() % 930);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.1) {
        sfClock_restart(clock);
        xrect = xrect + 168;
        if (xrect == 504)
            xrect = 0;
    }
    gestion_mouse(event, s_gyarados, y);
}
