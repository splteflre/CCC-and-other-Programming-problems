#include <iostream>

using namespace std;

int store[1000];
int dp[1000];
int out, num, x;


int main()
{
    cin >> out;
    cin >> num;
    fill(dp, dp+1000, 10000);
    dp[0] = 0;
    for(int i = 0; i < num; i++){
        cin >> store[i];
    }

    for(int i = 0; i < num; i++){
        for(int j = out; j >= store[i]; j--){
                x = j-store[i];
            if(dp[x] != 10000 && (dp[x] + 1) <= dp[j]){
                    dp[j] = dp[j - store[i]]+1;

            }

        }
    }

    if(dp[out] == 10000){
        cout << 0 << endl;
    }else{
        cout << dp[out] << endl;
    }



    return 0;
}
