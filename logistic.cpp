#include "logistic.h"

void PedroClass::hp_minus(int amount) {
    hp -= amount;
    if (hp <= 0) {
        hp = 0;
        // Персонаж умирает
    }
}

void PedroClass::heal(int amount) {
    hp += amount;
    if (hp > max_hp) {
        hp = max_hp;
    }
}

bool GameInfo::quest_changes(int act, int ans) {
    if (act == 0 && ans == 1) {
        Pedro.hp_minus(3);
        system_message = "Вас избил злой человек. Вы умерли.";
        return is_game_over = true;
    }
    if (act == 1 && ans == 2) {
        Pedro.hp_minus(3);
        system_message = "Вам на голову упал желудь. Вы умерли.";
        return is_game_over = true;
    }
    if (act == 2 && ans == 2) {
        Pedro.hp_minus(3);
        system_message = "Из-за тяжести кошелька с монетами с вас спали штаны на рынке. Вы умерли со стыда.";
        return is_game_over = true;
    }
    if (act == 2 && ans == 1) {
        system_message = "Вы прошли игру, Вернув человеку его кошелек, +реп +одна золотая моента от человека +вайб +совесть";
        return is_game_over = true;
    }
    return is_game_over = false;
}























