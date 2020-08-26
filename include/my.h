/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction 
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#ifndef MY_H_
#define MY_H_

void maj(sfRenderWindow *window, sfSprite *s_background, sfSprite *s_gyarados);
void end2(sfSprite *s_background, sfTexture *t_gyarados,
          sfTexture *t_background, sfRenderWindow *window);
void end1(sfSprite *s_gyarados, sfMusic *pokemonlake);
int error1(sfRenderWindow *window, sfTexture *t_background, sfTexture *t_gyarados, sfMusic *pokemonlake);
void gestion_mouse(sfEvent event, sfSprite* s_gyarados, int y);
void put_gyarados(sfRenderWindow *window, sfSprite *s_gyarados,
                  sfClock *clock, sfEvent event);


#endif
