/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfMusic *set_music(sfMusic *pokemonlake)
{
    pokemonlake = sfMusic_createFromFile("pokemonlake.ogg");
    sfMusic_play(pokemonlake);
    sfMusic_setLoop(pokemonlake, sfTrue);
    return (pokemonlake);
}

void continu2_main(sfRenderWindow *window, sfEvent event,
                 sfTexture *t_background, sfTexture *t_gyarados)
{
    sfSprite *s_background;
    sfSprite *s_gyarados;
    sfClock *clock;
    sfMusic *pokemonlake;

    pokemonlake = set_music(pokemonlake);
    error1(window, t_background, t_gyarados, pokemonlake);
    s_gyarados = sfSprite_create();
    s_background = sfSprite_create();
    sfSprite_setTexture(s_background, t_background, sfTrue);
    sfSprite_setTexture(s_gyarados, t_gyarados, sfTrue);
    clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        put_gyarados(window, s_gyarados, clock, event);
        maj(window, s_background, s_gyarados);
    }
    end1(s_gyarados, pokemonlake);
    end2(s_background, t_gyarados, t_background, window);
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfEvent event;
    sfTexture *t_background;
    sfTexture *t_gyarados;

    window = sfRenderWindow_create(mode, "my_hunter",
                                   sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    t_background = sfTexture_createFromFile("background.png", NULL);
    t_gyarados = sfTexture_createFromFile("gyarados.png", NULL);
    continu2_main(window, event, t_background, t_gyarados);
    return (0);
}
