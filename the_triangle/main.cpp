#include <iostream>

using namespace std;

int view[101][101], dp[101][101], n, ans;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cin >> view[i][j];
        }
    }

    dp[0][0] = view[0][0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(dp[i][j] + view[i+1][j] > dp[i+1][j]){
                dp[i+1][j] = dp[i][j] + view[i+1][j];
            }
            if(dp[i][j] + view[i+1][j+1] > dp[i+1][j+1]){
                dp[i+1][j+1] = dp[i][j] + view[i+1][j+1];
            }
        }
    }
    ans = dp[n-1][0];
    for(int i = 1; i < n; i++){
        if(ans < dp[n-1][i]){
            ans = dp[n-1][i];
        }
    }

    cout << ans;

    return 0;
}
