/*
** EPITECH PROJECT, 2019
** maj.c
** File description:
** maj
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void maj(sfRenderWindow *window, sfSprite *s_background, sfSprite *s_gyarados)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, s_background, NULL);
    sfRenderWindow_drawSprite(window, s_gyarados, NULL);
    sfRenderWindow_display(window);
}
