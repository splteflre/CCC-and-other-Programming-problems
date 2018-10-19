#include <bits/stdc++.h>

using namespace std;

map<int, int> bubu;
int n, big, small, temp;
vector<int> v;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        bubu[temp]++;
    }
    small = 1000001;
    big = -1;
    for(auto i: bubu){
        big = max(i.second, big);

        small = min(i.second, small);
    }
    cout << abs(big - small);

    return 0;
}
