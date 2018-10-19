#include <iostream>

using namespace std;

int dis, club;
int store[100002];
int dp[100002];


int main()
{
    cin >> dis;
    cin >> club;
    fill(dp+1, dp+100000, 10000);
    dp[0] = 0;

    for(int i = 0; i < club; i++){
        cin >> store[i];
    }

    for(int i = 0; i < club; i++){
        for(int j = 0; j <= dis-store[i]; j++){
            if(dp[j] != 10000){
                if(dp[j] + 1 < dp[j+store[i]]){
                    dp[j+store[i]] = dp[j] + 1;
                }

            }

        }

    }
    if(dp[dis] == 10000){
        cout << "Roberta acknowledges defeat." << endl;
    }else{
        cout << "Roberta wins in " << dp[dis] << " strokes."<< endl;
    }


    return 0;
}
