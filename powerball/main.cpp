#include <iostream>
#include <stdio.h>

using namespace std;

long long t, n, k, dp[34][34];
bool flag = true;

void makedp();

int main()
{
    makedp();
/*
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/

    cin >> t;
    for(int i = 0; i < t; i++){
        flag = true;
        cin >> n >> k;
        for(int j = 0; j < 33; j++){
            if(dp[j][k] >= n){
                flag = false;
                cout << j << endl;
                break;
            }
        }
        if(flag){
            cout << "Impossible" << endl;
        }
    }



    return 0;
}

void makedp(){
    for(int i = 1; i < 33; i++){
        for(int j = 1; j < 33; j++){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + 1;
        }
    }
}
