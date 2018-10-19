#include <iostream>
#include <math.h>
#include <queue>

using namespace std;

int t, input;
float reversed(int input);

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> input;
        cout << reversed(input);
    }



    return 0;
}

float reversed(int input){
    queue<int> store;
    float temp = 0;
    while(input != 0 && input != 1){
        store.push(input%2);
        input = input/2;
    }

    store.push(input);

    int num = store.size();
    for(float i = num; i > 0; i--){
        if(store.front() == 1){
            temp += pow(2.0, i-1);
        }
        store.pop();
    }


    return temp;
}
