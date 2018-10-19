#include <iostream>
#include <stdlib.h>

using namespace std;

string n1, n2, last;
int p1, p2, balloons = 10, turn;

int main()
{
    turn = rand() % 2 + 1;
    cout << "What is your name playe 1?" << endl;
    cin >> n1;
    cout << "What is your name playe 2?" << endl;
    cin >> n2;
    while(balloons > 0){
        if(turn == 1){
            cout << "how many balloons do you wish to pop player 1? ";
            cin >> p1;
            if(balloons - p1 >= 0){
                balloons-=p1;
                last = "1";
                turn = 2;
            }else{
                cout << "not enough balloons left" << endl;
                turn = 1;
                last = "1";
            }
        }else if(turn == 2){
            cout << "how many balloons do you wish to pop player 2? ";
            cin >> p2;
            if(balloons - p2>= 0){
                balloons-=p2;
                last = "2";
                turn = 1;
            }else{
                cout << "not enough balloons left" << endl;
                turn = 2;
                last = "2";
            }
        }
    }

    cout << "Congratulations player " + last + " you win!";
    return 0;
}
