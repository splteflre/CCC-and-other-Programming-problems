#include <iostream>
#include <algorithm>

using namespace std;

int dp[10000];
int h;
int num;
int input[10000];


int main()
{
    fill(dp, dp+10000, 1000);
    dp[0] = 0;
    cin >> h;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> input[i];
    }

    for(int i = 0; i < num; i++){
        for(int j = h; j >= input[i]; j--){
            if(dp[j - input[i]] >= 0){
                if(dp[j-input[i]]+1 <= dp[j]){
                    dp[j] = dp[j-input[i]] + 1;
                }

            }
        }
    }

    if(dp[h] != 1000){
        cout << dp[h] << endl;
    }else{
        cout << "0" << endl;
    }


    return 0;
}
