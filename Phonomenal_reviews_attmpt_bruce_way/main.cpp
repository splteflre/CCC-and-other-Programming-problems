#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int m, n, visited[100003], dis[100003], x, y, pho[100000], temp, start;
vector<int> adj;
queue<int> q;

int main()
{
    cin >> n >> m;
    for(int i 0; i < m; i++){
        cin>>pho[i];
    }
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(pho[0]);
    for(int i = 0; i <= n; i++){
        if(temp < dis[i]){
            temp = dis[i];
            start = i;
        }
    }
    fill(visited, visited + 10002, 0);
    fill(dis, dis+10002, 0);
    temp = 0;
    start = 0;
    bfs(start);
    for(int i = 0; i < n; i++){
         if(temp < dis[i]){
            temp = dis[i];
            start = i;
        }
    }
    dfs(start);



    return 0;
}

void bfs(int s){
    q.push(s);
    while(!q.empty()){
        int use = q.front();
        q.pop();
        for(int i = 0; i < adj[use].size(); i++){
            int cur = adj[use][i];
            if(visited[cur] != 1){
                visited[cur] = 1;
                dis[cur] = dis[use] + 1;
                q.push(cur);
            }
        }

    }
}

void dfs(int s, int par){

}

