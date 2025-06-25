#include "visual.h"
#include "logistic.h"

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    names();

    GameInfo info;

    int answer = otvet();
    if (answer==2){
        return 0;
    }

    while(info.is_game_over == false){

        for(int i = 0; i < 3; i++){
        selection(quest[i], get_otvet_a[i], get_otvet_b[i]);
        int ans = otvet();
        info.quest_changes(i, ans);
        if ((i == 0 && ans == 1) || (i == 1 && ans == 2) || (i == 2 && ans == 2) || (i == 2 && ans == 1)) {
            break;
        }
    }
    
    

    }
    cout << info.system_message << endl;
    cout << "Нажмите любую клавишу для выхода...";
    cin >> *(int*)0x0;
}