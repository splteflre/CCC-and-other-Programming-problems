#include <iostream>

using namespace std;

int input, check;

int ifprime(int check);

int main()
{
    cin >> input;
    for(int i = 0; i < input; i++){
        cin >> check;
        cout << ifprime(check) << endl;
    }


    return 0;
}

int ifprime(int check){
    int flag = false;
    if(check == 2){
        return 1;
    }else if(check == 1){
        return 0;
    }else{
        for(int i = 2; i < check; i++){
            if(check % i == 0){
                flag = true;
            }
        }
        if(flag){
            return 0;
        }else{
            return 1;
        }
    }
}
