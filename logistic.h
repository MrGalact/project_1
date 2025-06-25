#pragma once
#include <iostream>
#include <string>

using namespace std;

class PedroClass {
public:
    int hp = 3;
    int max_hp = hp;
    int armor = 0;
    void hp_minus(int amount);
    void heal(int amount);
    int get_hp(); 
};

class GameInfo {
    public:
    bool is_game_over = false;
    string system_message;
    PedroClass Pedro;
    bool quest_changes(int act, int ans); 
};


