#pragma once
#include <iostream>
#include <string>

using namespace std;

class PedroClass {
    int hp = 3;
    int max_hp = hp;
    int armor = 0;
    string death_message;
public:
    void hp_minus(int amount);
    void heal(int amount);
    int get_hp(); 
    void quest_changes(int act, int ans); 
};

class GameInfo {
public:
    bool is_game_over = false;
    PedroClass Pedro;
};


