/*
** EPITECH PROJECT, 2019
** end2.c
** File description:
** end2
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void end2(sfSprite *s_background, sfTexture *t_gyarados,
          sfTexture *t_background, sfRenderWindow *window)
{
    sfSprite_destroy(s_background);
    sfTexture_destroy(t_gyarados);
    sfTexture_destroy(t_background);
    sfRenderWindow_destroy(window);
}
