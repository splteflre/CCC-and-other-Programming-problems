#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;
queue <int> q;
int a, b, c, d, out, topo[10002], visited[10002];
vector<int> adj[10002];

int main()
{
    cin >> a >> b;
    for(int i = 0; i < b; i++){
        cin >> c >> d;
        adj[c].push_back(d);
        topo[d]++;
    }
    for(int i = 1; i <= a; i++){
        if(topo[i] == 0){
            q.push(i);
            visited[i] = 1;
            //out++;
        }
    }
    while(!q.empty()){
        int use = q.front();
        out++;
        q.pop();
        /*op method for(auto v: adj[u]) */
        for(int i = 0; i < adj[use].size(); i++){
            topo[adj[use][i]]--;
            if(topo[adj[use][i]] == 0 && visited[adj[use][i]] != 1){
                q.push(adj[use][i]);
                visited[adj[use][i]] = 1;
                //out++;
            }

        }
    }
   // cout << out << endl;
    if(out == a){
        cout << "Y";
    }else{
        cout << "N";
    }


    return 0;
}
