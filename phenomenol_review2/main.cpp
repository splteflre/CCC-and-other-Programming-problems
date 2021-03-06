#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
using namespace std;

int n, m, visited[100000], x, y, dis[100000], small = 1000000, temp, total;
vector<int> adj[100000];
queue<int> q;
vector<int>des;

void bfs(int s, int d);
int main()
{
    cin >> n >> m;
    if(m == 2){
        int s, d;
        cin >> s >> d;
        for(int i = 0; i < n-1; i++){
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(s, d);
        cout << dis[d];

    }else{
        for(int i = 0; i < m; i++){
            scanf("%d", &temp);
            des.push_back(temp);
        }
        for(int i = 0; i < n-1; i++){
            scanf("%d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        sort(des.begin(), des.end());
        do {
            for(int i = 0; i < m-1; i++){
                bfs(des[i], des[i+1]);
                total = total + dis[i+1];
                //cout << "total " << total << endl;
            }
            //cout << "total " << total << endl;
            small = min(small, total);
            total = 0;
            fill(dis, dis+100000, 0);
            fill(visited, visited+100000, 0);
        }while ( next_permutation(des.begin(),des.end()) );
        cout << small;

    }


    return 0;
}

void bfs(int s, int d){
    q.push(s);
    while(!q.empty()){
        int use = q.front();
        q.pop();
        for(int i = 0; i < adj[use].size(); i++){
            int x = adj[use][i];
            if(visited[x] != 1){
                visited[x] = 1;
                dis[x] = dis[use] + 1;
                 q.push(x);
            }
        }
    }
}

/*
8 2
5 2
0 1
0 2
2 3
4 3
6 1
1 5
7 3

8 5
0 6 4 3 7
0 1
0 2
2 3
4 3
6 1
1 5
7 3

11 6
0 4 7 8 9 10
0 1
1 2
2 3
3 4
4 5
2 6
6 7
7 8
8 9
10 7

*/
