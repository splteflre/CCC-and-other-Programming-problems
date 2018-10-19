#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int input, num;
string check;
bool same = false;

int main()
{
    scanf("%d", &input);
    while(true){
        input++;
        check = "" + to_string(input);
        num = check.length();
        for(int i = 0; i < num; i++){
            for(int j = i+1; j < num; i++){
                if(check[i] == check[j]){
                    same = true;
                    break;
                }
            }
            if(same){
                break;
            }
        }
        if(same == false){
            break;
        }
    }

    cout << check << endl;


    return 0;
}
