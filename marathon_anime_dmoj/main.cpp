#include <iostream>
#include <cstdio>
using namespace std;

int n, q, store[500001], a, b, total, temp;

int main()
{
    scanf("%d %d", &n, &q);

    for(int i = 1; i <= n; i++){
        scanf("%d", &temp);
        store[i] = store[i-1] + temp;
        total = temp + total;
    }

    for(int i = 0; i < q; i++){
        scanf("%d %d", &a, &b);
        printf("%d \n", total - (store[b] - store[a-1]));
    }

    return 0;
}
