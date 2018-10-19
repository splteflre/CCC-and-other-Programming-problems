#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long n, q, temp, re[19];

void result(int k);
long long factorial(int n);
int main()
{
    cin >> n >> q;
    for(int i = 0; i < q; i++){
        cin >> temp;
        result(temp+1);
        for(int i = 0; i < n; i++){
            cout << re[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void result(int k){
    vector<int> store;
    for (int i = 1; i <= n; i++){
        store.push_back(i);
    }
    int N = n;
    for(int i = 1; i < n; i++){
        int num = ceil(double(k) / (factorial(N-1)));
        re[i - 1]=store[num-1];
        store.erase(store.begin() + (num-1));
        k = k%factorial(N-1);
        N--;
    }
    re[n - 1] = store[0];
}

long long factorial(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *=i;
    }
    return ans;
}

