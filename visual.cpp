#include "visual.h"

void names(){
    cout << "===========================\n"; 
    cout << "|     PEDRO SURVIVE       |\n";
    cout << "===========================\n"; 
    cout << "|   1. PLAY  |   2. EXIT  |\n";
    cout << "===========================\n";
}

void selection(string c, string a, string b){
system("cls");
cout << "Глава I\n";
cout << c << endl;
cout << "1. " << a << endl;
cout << "2. " << b << endl;
}






int otvet(){
    int ans = 0;
    cin >> ans;
    return ans;
}



