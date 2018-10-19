#include <iostream>
#include <stdio.h>

using namespace std;

int input;

int main()
{
    scanf("%d", &input);
    int temp = input;
    for(int i = 0; i < temp; i++){
        cin >> input;
        if(input >= 80 && input <= 100){
            cout << "A" << endl;
        }else if(input >= 70 && input <= 79){
            cout << "B" << endl;
        }else if(input >= 60 && input <= 69){
            cout << "C" << endl;
        }else if(input >= 50 && input <= 59){
            cout << "D" << endl;
        }else if(input >= 0 && input <= 49){
            cout << "F" << endl;
        }else{
            cout << "X" << endl;
        }


    }

    return 0;
}
