#include <iostream>
#include <stdio.h>

using namespace std;

int n, k, a, b, temp, store[1000000], store2[1000000], l;

int main()
{
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= k; i++){
        scanf("%d", &temp);
        store[temp] = store[temp] + 1;
    }
    store2[0] = store[0];
    for(int i = 1; i <= n; i++){
        store2[i] = store[i] + store2[i-1];
    }
    s canf("%d", &l);

    for(int i = 0; i < l; i++){
        scanf("%d %d", &a, &b);
        if(a==0){
            printf("%d\n", store2[b]);
        }else{
            printf("%d\n", store2[b]-store2[a-1]);
        }

    }


    return 0;
}
