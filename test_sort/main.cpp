#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;
bool func(int a, int b);
bool func2(int a, int b);
int store[5];

int main()
{
    for(int i = 0; i < 5; i++){store[i] = i;}
    sort(store, store+5, func);
    //sort(store, store+5, func2);
    for(int i = 0; i < 5; i++){printf("%d", store[i]);}

    return 0;
}

bool func(int a, int b){
    return a>b; // 4 3 2 1 0/* */
}

bool func2(int a, int b){
    return a < b; // 0 1 2 3 4
}
