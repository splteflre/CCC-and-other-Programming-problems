#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>

using namespace std;

int n, m; double dp[1000000];
vector<int> adj[2000000];

int main()
{
    scanf("%d %d", &n &m);

    for(int i = 0, x, y; i < m; i++){
        scanf("%d %d", &x &y);
        adj[x].push_back(y);
    }
    dp[1] = 1.0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= adj.size(); j++){
            if(adj[adj[i][j]].empty()){
                cout << 1/dp[adj[i]+1]
            }else{
                dp[adj[i][j]] += dp[adj[i]+1];
            }
        }
    }


    return 0;
}



/*
vector<int> lis[2000000];
double dp[1000000];
long long n, m, i, j;
queue <int> out;

int main()
{
    dp[1] = 1;
    cin >> n >> m;
    for(long long k = 1; k <= m; k++){
        cin >> i >> j;
        lis[i].push_back(j);
    }
    for(long long k = 1; k <= n; k++){
        if(lis[k].size() == 0){
            out.push(k);
        }
        for(int l = 1; l <= lis[k].size(); l++){
            dp[lis[k][l]] = dp[lis[k][l]] + (dp[k] / lis[k].size());
        }
    }
    int temp = out.size();
    for(int k = 0; k < temp; k++){
        cout << dp[out.front()] << endl;
        out.pop();
    }
    return 0;
}
*/
