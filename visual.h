#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



void names();

void selection(string c, string a, string b);

int otvet();

static string quest[3] = {
    "К вам подошел очень злой человек \n \" А НУ ВЕРНИ МОЙ КОШЕЛЁК!\"",
    "Вы поговорили объяснили, что понятия не имеете о каком кошельке идет речь и отправились дальше. \n \n по дороге дальше вы нашли черный кошелек набитый золотыми монетами.\nВаши действия:",
    "Вы можете вернуться обратно и отдать кошелек, который явно принадлежал тому злому человеку:"
};

static string get_otvet_a[6] = {
    "Ударить", 
    "Подобрать", 
    "Вернуть"
};
static string get_otvet_b[6] = {
    "Урегулировать конфликт",
    "Пройти мимо",
    "Оставить себе"
};

