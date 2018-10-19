#include <iostream>

using namespace std;

int x, n, store[10002], dp[10002];


int main()
{
    cin >> x;
    cin >> n;
    fill(dp+1, dp+10002, 10000);
    dp[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> store[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= x-store[i]; j++){
            if(dp[j] != 10000){
                if(dp[j] + 1 < dp[j+store[i]]){
                    dp[j+store[i]] = dp[j] + 1;
                }

            }

        }

    }

    cout << dp[x];

    return 0;

}
