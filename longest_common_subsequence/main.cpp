#include <iostream>

using namespace std;

int n, m, store1[1001], store2[1002], dp[1001][1001];

int main()
{
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        cin >> store1[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> store2[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(store1[i] == store2[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }

        }
    }
    /*
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << dp[i][j];
        }
        cout << endl;
    }
    */

    cout << dp[n][m];



    return 0;
}
