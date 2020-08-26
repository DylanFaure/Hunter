/*
** EPITECH PROJECT, 2019
** end1.c
** File description:
** end1
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void end1(sfSprite *s_gyarados, sfMusic *pokemonlake)
{
    sfMusic_destroy(pokemonlake);
    sfSprite_destroy(s_gyarados);
}
