/*
** EPITECH PROJECT, 2019
** error1.c
** File description:
** error1
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

int error1(sfRenderWindow *window, sfTexture *t_background,
           sfTexture *t_gyarados, sfMusic *pokemonlake)
{
    if (!window || !t_background || !t_gyarados || !pokemonlake)
        return (84);
}
