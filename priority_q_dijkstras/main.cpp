#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
typedef pair<int, int> pii;
int v, e, dis[1002]; bool vis[1002];
vector<pii> adj[1002];
 priority_queue<pii, vector<pii>, greater<pii> > Q;
void dijkstra(int start){
    memset(dis, 0x3f, sizeof(dis));
    dis[start] = 0;
    Q.push(make_pair(0, start));
    while(!Q.empty()){
        int cur = Q.top().second; Q.pop();
        if(vis[cur]) continue;
        vis[cur] = 1;
        for(int i = 0; i < adj[cur].size(); i++){
            int v = adj[cur][i].second, d = adj[cur][i].first;
            if(dis[v] > dis[cur] + d){
                dis[v] = dis[cur] + d;
                Q.push(make_pair(dis[v], v));
            }
        }

    }
}

int main()
{
    cin >> v >> e;
    for(int i = 0, V, u, w; i < e; i++){
        cin >> u >> V >> w;
        adj[u].push_back(make_pair(w, v));
        adj[v].push_back(make_pair(w, u));

    }
    dijkstra(1);

    for(int i = 1; i <= v; i++)
        if(vis[i] == 1) cout << dis[i] << endl;
        else cout << -1 << endl;




    return 0;
}
