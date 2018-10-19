#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

string input;
int total;

int main()
{

    cin >> input;
    int num = input.length();
    for(int i = 0; i < num; i++){
        if(input[i] >= 'A' && input[i] <= 'Z'){
            if((i + total) % 4 != 0){
                total += 4 - ((i+total)%4);
            }
        }
    }
    cout << total;



    return 0;
}
