#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;


int t, l, w, num, dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1},sx, sy, ex, ey;
char store[1000][1000];
queue <int> qx;
queue <int> qy;

void bfs(char store[][1000],int sx,int sy,int ex,int ey);

int main()
{
    cin >> t;
    while(num != t){
        cin >> l >> w;
        for(int i = 0; i < w; i++){
            for(int j = 0; j < l; j++){
                cin >> store[i][j];
                if(store[i][j] == 'C'){
                    sx = j;
                    sy = i;
                }else if(store[i][j] == 'W'){
                    ex = j;
                    ey = i;
                }
            }
        }
        bfs(store, sx, sy, ex, ey);

    }

    return 0;
}

void bfs(char store[][1000], int sx,int sy, int ex, int ey){
    int vis[1000][1000], dist[1000][1000], x, y;
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            vis[i][j] = 0;
            dist[i][j] = 0;
        }
    }
    qx.push(sx);
    qy.push(sy);
    dist[sy][sx] = 0;
    vis[sy][sx] = 1;
    while(!qx.empty() && !qy.empty()){
        x = qx.front(); qx.pop();
        y = qy.front(); qy.pop();
        for(int i = 0; i < 4; i++){
            if(y+dy[i] >= 0 && y+dy[i] < w && x+dx[i] >= 0 && x+dx[i] < l&&store[y+dy[i]][x+dx[i]] != 'X'&&vis[y+dy[i]][x+dx[i]] != 1){
                qx.push(x+dx[i]);
                qy.push(y+dy[i]);
                vis[y+dy[i]][x+dx[i]] = 1;
                dist[y+dy[i]][x+dx[i]] = dist[y][x] + 1;
            }
        }
        if(dist[ey][ex] <= 60){
            cout << dist[ey][ex] << endl;
        }else{
            cout << "#notworth" << endl;
        }
    }
}
