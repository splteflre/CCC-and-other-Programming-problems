#include <iostream>

using namespace std;

long long dp[10001], n, t, pp[10001], vp[10001], pa[10001], va[10001], pg[10001], vg[10001], v1, v2, v3;


int main()
{
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        cin >> pp[i] >> vp[i] >> pa[i] >> va[i] >> pg[i] >> vg[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = t; j > 0; j--){
            if(j - pp[i] >= 0){
                v1 = dp[j - pp[i]] + vp[i];
            }else{
                v1 = 0;
            }
            if(j - pa[i] >= 0){
                v2 = dp[j - pa[i]] + va[i];
            }else{
                v2 = 0;
            }
            if(j - pg[i] >= 0){
                v3 = dp[j - pg[i]] + vg[i];
            }else{
                v3 = 0;
            }
            if(v1 >= v2 && v1 >= v3){
                if(v1 >= dp[j])
                    dp[j] = v1;
            }else if(v2 >= v3){
                if(v2 >= dp[j])
                    dp[j] = v2;
            }else{
                if(v3 >= dp[j])
                    dp[j] = v3;
            }

        }
    }

    cout << dp[t];





    return 0;
}
