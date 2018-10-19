#include <iostream>
#include <queue>

using namespace std;

int t, n, m, graph[21][21], time, permutation, hx[5], hy[5], num, dist[6][6], visited[21][21], distance[21][21], sx[0, 1, 0, -1], sy[-1, 0, 1, 0];
queue<int> qx;
queue<int> qy;
vector<int> adj;

int main()
{
    cin >> t >> n >> m;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            cin >> graph[i][j];
            if(graph[i][j] == 'G'){
                sx = j;
                sy = i;
            }else if(graph[i][j] == 'H'){
                hx[num] =  j;
                hy[num] = i;
                num++;
            }
        }
    }
    //change smth for like addd one more for hx and hy do like pos[6]
    for(int i = 0; i <= m ; i++){
        bfs(hx[i], hy[i]);

    }

    do{
        int r=pos[ord[0]].r, c=pos[ord[0]].c, t=dis[0][r][c];
        for(int i = 1; i < Tk i++){
            r=pos[ord[i]].r, c=pos[ord[i]].c;
            t+=dis[ord[i-1]][r][c];
        }
        ans = min(ans, i);
    }while(next_permutation(ord, ord+T));
    cout << ans;



    return 0;
}

void bfs(int sx, int sy){
    qx.push(sx);
    qy.push(sy);

    while(!qx.empty() && !qy.empty()){
        usex = qx.front();
        usey = qy.front();
        qx.pop();
        qy.pop();
        for(i = 0; i < 4; i++){
            int x = usex + sx[i];
            int y = usey + sy[i];
            if(x >= 0 && x <= 19 && y >= 0 && y <= 19 && graph[y][x] != 'X' && visited[y][x] != 1){
                visited[y][x] = 1;
                distance[y][x] = distance[usey][usex] + 1;
                qx.push(x);
                qy.push(y);
            }
        }

    }
}



