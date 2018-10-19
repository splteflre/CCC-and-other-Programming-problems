#include <iostream>

using namespace std;

int num, cap;

class Two{
    public:
    int v;
    int s;

};

Two store[1001];
int dp[1001][1001];


int main()
{
    cin >> num >> cap;
    for(int i = 0; i < num; i++){
        cin >> store[i].v >> store[i].s;

    }

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= cap; j++){
            if(store[i-1].s > j){
                dp[i][j] = dp[i-1][j];

            }else if(store[i-1].s <= j){
                if(store[i-1].v + dp[i-1][j-store[i-1].s] >= dp[i-1][j]){
                    dp[i][j] = store[i-1].v + dp[i-1][j-store[i-1].s];

                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    /*
    for(int i = 0; i <= num; i++){
        for(int j = 0; j <= cap; j++){
            cout << dp[i][j];
        }
        cout << endl;
    }*/

    cout << dp[num][cap] << endl;



    return 0;
}
