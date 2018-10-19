#include <iostream>
#include <stdio.h>

using namespace std;

string weapons[9] = {"Doran's blade", "Doran's ring", "Doran's shield", "Corrupting potion", "Long sword", "Infinity edge", "Phantom dancer", "Dark seal", "Cull"};
int prices[9] = {450, 450, 450, 500, 350, 3200, 3000, 350, 400};
string sounds[9] = {"slash", "pew", "block", "ssssssssss", "swoosh", "infinity and beyond", "ooh spooky", "whoa so dark", "cull cull"};
int inventory[9];
char input;
int select_weapon;
int money = 3200;
bool purchased = false;
string starting_menu  = "a. Buy Weapon \nb. Check Balance \nc. Exit Store";


int main()
{
    while (true){
        cout << starting_menu << endl;
        cin >> input;

        if (input == 'a'){
            cout << "Which weapon do you wanna buy? Enter the corresponding weapon number" << endl;
            for(int i = 0; i < 9; i++){
                cout << i + 1 << ". " + weapons[i] << ", " << prices[i] << " gold" << endl;
            }
            cin >> select_weapon;
            if (inventory[select_weapon - 1] != 1 && money >= prices[select_weapon-1]){
                inventory[select_weapon - 1] = 1;
                money -= prices[select_weapon-1];
                purchased = true;
            }else if (money < prices[select_weapon-1]){
                cout << "Not enough money" << endl;
            }else{
                cout << "Already purchased item" << endl;
            }

        }else if (input == 'b'){
            cout << "Your balance is: " << money << endl;
        }else if (input == 'c'){
            if (purchased){
                break;
            }else{
                cout << "You didn't buy anything" << endl;
            }
        }
    }

    cout << "Enter the weapon in your inventory you would like to use: " << endl;
    for(int i = 0; i < 9; i++){
        if(inventory[i] == 1){
            cout << i + 1 << ". " + weapons[i] << endl;
        }
    }
    cin >> select_weapon;

    while (input != 'e'){
        cout << "press u to use weapon and c to change weapon and e to exit" << endl;
        cin >> input;

        if(input == 'c'){
            cout << "Enter the weapon in your inventory you would like to use: " << endl;
            for(int i = 0; i < 9; i++){
                if(inventory[i] == 1){
                    cout << i + 1<< ". " + weapons[i] << endl;
                }
            }
            cin >> select_weapon;
        }else if(input == 'u'){
            cout << sounds[select_weapon - 1] << endl;
        }else if (input != 'e'){
            cout << "sorry not an option" << endl;
        }

    }


    return 0;
}
