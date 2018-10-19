#include <iostream>
#include <vector>

using namespace std;

int n, x, y, dp[10000];

vector <int> adj[10000];

int main()
{
    x = 1;
    y = 1;
    cin >> n;
    while(x != 0&& y != 0){
        cin >> x >> y;
        adj[x].push_back(y);
    }
    dp[1] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < adj[i].size(); j++){
            dp[adj[i][j]] += dp[i];
        }
    }
    cout << dp[n] << endl;

    return 0;
}
