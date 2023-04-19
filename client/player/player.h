//
// Created by wlodi on 24.03.2023.
//

#ifndef SO2_PLAYER_H
#define SO2_PLAYER_H
#include "../server/server.h"
#include "ncurses.h"
#include "../constants/constants.h"


void draw_map(Game * game);
Player *create_player(int id, Game *game);
void run_client();
int move_player(int ch, Player * player);
#endif //SO2_PLAYER_H
