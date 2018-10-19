#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, k, visted[30002], a, b, t[30002], ans;
vector <int> adj[30002];
queue <int> q;


int main()
{
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> a;
        q.push(a);
        visted[a] = 1;
    }
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(int i = 0; i < adj[u].size(); i++){
            int use = adj[temp][i];
            if(visited[use] != 1){
                q.push(use);
                visited[use] = 1;
                t[use] = t[temp] + 1;
                ans = max(ans, t[use]);
            }

        }
    }
    cout << ans << endl;

    return 0;
}
