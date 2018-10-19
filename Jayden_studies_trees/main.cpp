#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, x, y, first[10002], second[10002], ss, b, s, visited[10002], dis[10002];
vector<int> adj[10002];
queue<int> q;

void bfs(int s);

int main()
{
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> x >> y;
        adj[y].push_back(x);
        adj[x].push_back(y);

    }
    bfs(1);
    for(int i = 0; i <= n; i++){
        if(s < dis[i]){
            s = dis[i];
            ss = i;
        }
    }
    fill(visited, visited + 10002, 0);
    fill(dis, dis+10002, 0);
    bfs(ss);
    for(int i = 0; i < n; i++){
        b = max(b, dis[i]);
    }
    cout << b;
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
