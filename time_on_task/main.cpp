#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int t, c, sum, store[100000], num;

bool func(int a, int b){
    return a<b;
}

int main()
{
    scanf("%d %d", &t, &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &store[i]);
    }
    sort(store, store+c, func);

    for(int i = 0; i< c; i++){
        if(sum + store[i] <= t){
            sum += store[i];
            num++;
        }
    }
    printf("%d", num);

    return 0;
}
