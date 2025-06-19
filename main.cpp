#include "visual.h"
#include "logistic.h"

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    names();

    GameInfo info();

    int answer = otvet();

    while(info.is_game_over == false){
        cout << "ГЛАВА: 1";

        for(int i = 0; i < 3; i++){
        selection(quest[i], get_otvet_a[i], get_otvet_b[i]);
        int ans = otvet();
        info.quest_changes(i, ans);
    }
  
    cout << "Вы прошли игру, Вернув человеку его кошелек, +реп +одна золотая моента от человека +вайб +совесть";

}
cout << death_message;
}