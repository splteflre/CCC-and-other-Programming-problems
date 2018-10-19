#include <iostream>
#include <stdio.h>

using namespace std;

int i, n, j, store[1000003], store2[1000003], a, b, c, num;

int main()
{
    scanf("%d %d %d", &i, &n, &j);

    for(int d = 1; d <= j; d++){
        scanf("%d %d %d", &a, &b, &c);
        store[a] += c;
        store[b+1] -= c;
    }
    /*
    for(int d = 0; d <= i; d++)
        cout << store[d] << endl;*/
    store2[0] = store[0];
    for(int d = 1; d <= i; d++){
        store2[d] = store2[d-1] + store[d];
        if(store2[d] < n){
            num++;
        }
    }
    printf("%d", num);



    return 0;
}
