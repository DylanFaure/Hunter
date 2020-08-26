/*
** EPITECH PROJECT, 2019
** gestion_mouse.c
** File description:
** gestion mouse
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void gestion_mouse(sfEvent event, sfSprite *s_gyarados, int y)
{
    static int xmouse;
    static int ymouse;

    if (sfMouse_isButtonPressed (sfMouseLeft)) {
        xmouse = (event.mouseButton.x);
        ymouse = (event.mouseButton.y);
        if (xmouse >= sfSprite_getPosition(s_gyarados).x && xmouse <=
            sfSprite_getPosition(s_gyarados).x + 168 && ymouse >=
            sfSprite_getPosition(s_gyarados).y && ymouse <=
            sfSprite_getPosition(s_gyarados).y + 116) {
            y = rand() % 900;
            sfSprite_setPosition(s_gyarados, (sfVector2f){-168, y});
        }
    }
}
