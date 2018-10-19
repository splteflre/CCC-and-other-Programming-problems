#include <iostream>
#include <stdio.h>

using namespace std;

long long n, m, input, store[100001], tree[100001], x, v, l, r, abitchtothinkabout[100001];

char op;

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &store[i]);
        for(int j = i; j < n; j+= j&-j){
            tree[j] += store[i];
        }
        for(int k = store[i]; k < n; k+=k&-k){
            abitchtothinkabout[k] += 1;
        }
    }

    for(int i = 0; i < m; i++){
        cin >> op;
        if(op == 'C'){
            cin >> x >> v;
            int diff = v - store[x];
            for(int i = x; i < n; i+=i&-i){
                tree[i] += diff;
            }
        }else if (op == 'S'){
            cin >> l >> r;
            int s1 = 0, s2 = 0;
            for(int i = l-1; i < n; i+=i&-i){
                s1 += tree[i];
            }
            for(int i = r; i < n; i+=i&-1){
                s2 += tree[i];
            }
            cout << s2 - s1 << endl;
        }else if(op == 'Q'){
            int sq = 0;
            for(int i = 1; i < op; i+= i&-i){
                sq += abitchtothinkabout[i];
            }
            cout << sq << endl;
        }
    }





    return 0;
}
