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

void PedroClass::quest_changes(int act, int ans) {
    if (act == 0 && ans == 1) {
        hp_minus(3);
        death_message = "Вас избил злой человек. Вы проиграли.";
    }
    if (act == 1 && ans == 2) {
        hp_minus(3);
        death_message = "Вам на голову упал желудь. Вы проиграли.";
    }
    if (act == 3 && ans == 2) {
        hp_minus(3);
        death_message = "Из-за тяжести кошелька с монетами с вас спали штаны на рынке. Вы умерли со стыда.";
    }
}























