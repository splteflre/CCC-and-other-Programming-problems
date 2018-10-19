#include <bits/stdc++.h>
using namespace std;

const int SIZE = 5001;


int main()
{
    int n, v[SIZE], ans=0;
    vector<int> input(SIZE);
    //vector<int> :: iterator ans;

    memset(v, 0x3f, sizeof(v));

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    for(int i = 0; i < n; i++){
        int ind = lower_bound(v, v+SIZE, input[i]) - v;
        v[ind] = input[i];
        ans = max(ans, ind+1);
    }

    cout << ans << endl;

    /*
    for(int i = 0 ; i < n; i++){
        ans = upper_bound(v.begin(), v.end(), input[i]);
       // cout << " position " << ans - v.begin() << endl;
        v[ans-v.begin()] = input[i];

    }


    ans = upper_bound(v.begin(), v.end(), 5000);
    //cout << *ans << endl;
    cout << ans-v.begin();
    */

    return 0;
}
