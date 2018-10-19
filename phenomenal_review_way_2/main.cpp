#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, m, pho[100000], parent[100000], temp, cnt, dist[100000];
vector<int>adj;
vector<int>newtree;
void dfs(int start);

int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> temp;
        pho[temp] = 1;
    }
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(pho[0], -1);
    cout << (2*cnt) - checkd(checkd(pho[0], -1), -1);


    return 0;
}

void dfs(int start, int parent){

    for (int v : adj[start]) {
        if (v == parent) continue;
        dfs(v, start);
        if(newtree[start].size > 0 || pho[start]){
            newtree[parent].push_back(start);
            newtree[start].push_back(parent);
            cnt++;
        }

    }
}

int checkd(int start, int parent){
    for(auto v: adj[start]){
        if(v==parent)continue;
        dist[v] = dist[start]+1;
        checkd(v, start);
    }
    int big = 0;
    for(int i = 0; i < n; i++){
        big = max(big, dist[i]);
    }
    return big;

}



