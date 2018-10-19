#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int n, prefix[1000001], num, a, b, q;

int main()
{
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        //cin >> num;
        scanf("%d", &num);
        prefix[i] = prefix[i-1] + num;
    }

    scanf("%d", &q);

    for(int i =0; i < q; i++){
        //cin >> a >> b;
        scanf("%d %d", &a, &b);
        printf("%d\n", prefix[b+1] - prefix[a]);

    }


    return 0;
}
