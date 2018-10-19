#include <iostream>

using namespace std;

const long long MAX = 100000;
long long n, m, x, y, v;
int bit[MAX + 1];
int a[MAX + 1];
int Q[MAX + 1];
long long an;
char op;

void update(int x, long long y){
    for(int i = x; i <= MAX; i+=(i&-i)){
        bit[i] += y;
    }
}

void update2(int amount,long long x){
    for(int i = x; i <= MAX; i+=(i&-i)){
        Q[i] += amount;
    }
}

long long sum(int num){
    long long ans = 0;
    for(int i = num; i; i-=(i&-i)){
        ans += bit[i];

    }
    return ans;
}

long long sum2(long long num){
    long long ans = 0;
    for(int i = num; i; i-=(i&-i)){
        ans += Q[i];

    }
    return ans;
}


int main()
{v
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for(long long i = 1; i <= n; i++){
        cin >> a[i];
        update(i, a[i]);
        update2(1,a[i]);
    }

    for(long long i = 1; i <= m; i++){
        cin >> op;

        if(op == 'c'){
            cin >> x >> y;
            update(x, y-a[x]);
            update2(-1,a[x]);
            update2(1,y);
            a[x] = y;
        }else if(op == 's'){
            cin >> x >> y;
            long long re = sum(y) - sum(x - 1);
            cout << re << endl;

        }
        else if(op == 'q'){
            cin >> v;
            long long ans = sum2(v);
            cout << ans << endl;
m
        }



    }





    return 0;
}
