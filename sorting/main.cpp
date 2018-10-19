#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int n, store[100];

int main()
{
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &store[i]);
    }
    sort(store, store+n);

    for(int i =0 ;i < n; i++){
        cout << store[i] << endl;
    }




    return 0;
}
