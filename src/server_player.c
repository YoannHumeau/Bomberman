#include <stdio.h>
#include <stdlib.h>
#include <include/server_player.h>
#include <include/server.h>

void player_move(t_server_game *server_game, int player, char command) {

    printf("\n\n\n------------__ %d _ %c\n", player, command);

    switch (command)
    {
        case 'U' :
            server_game->player1.y_pos = server_game->player1.y_pos-1;
            break;
        case 'D' :
            server_game->player1.y_pos = server_game->player1.y_pos+1;
            break;
        case 'L' :
            server_game->player1.x_pos = server_game->player1.x_pos-1;
            break;
        case 'R' :
            server_game->player1.x_pos = server_game->player1.x_pos+1;
            break;
    }
    printf("P1-> X : %d\n", server_game->player1.x_pos);
    printf("P1-> Y : %d\n", server_game->player1.y_pos);

    if (1 == 1) {
        server_game->schema[2][2] = 'Z';
    }
}

/*
server_player_t *init_server_player(int num_player)
{
    server_player_t *server_player = NULL;

    server_player = malloc(sizeof(server_player_t));

    if (server_player == NULL) {
        fprintf(stderr, "[MALLOC] unable to allocate memory\n");
        return NULL;
    }

    switch (num_player)
    {
        case 1 :
            server_player->x_pos = 0;
            server_player->y_pos = 0;
            break;
        case 2 :
            server_player->x_pos = 100;
            server_player->y_pos = 0;
            break;
        case 3 :
            server_player->x_pos = 50;
            server_player->y_pos = 0;
            break;
        case 4 :
            server_player->x_pos = 50;
            server_player->y_pos = 100;
            break;
    }

    server_player->connected = 'Y';
    server_player->alive = 'Y';
    server_player->current_dir = 3;
    server_player->current_speed = 10;
    server_player->max_speed = 10;
    server_player->bombs_left = 1;
    server_player->bombs_capacity = 1;
    server_player->frags = 0;

    return server_player;
}
*/