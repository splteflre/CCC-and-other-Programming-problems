#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, trees[1000001], q, a, b, temp;

int main()
{
    scanf("%d", &n);
    for(int i =1; i <= n; i++){
        scanf("%d", &temp);
        trees[i] = trees[i-1] + temp;
    }

    scanf("%d",&q);

    for(int i = 0; i < q; i++){
        scanf("%d %d", &a, &b);
        printf("%d", trees[b+1] - trees[a]);
    }


    return 0;
}
