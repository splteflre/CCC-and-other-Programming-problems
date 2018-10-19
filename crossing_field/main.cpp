#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

queue<int> qx;
queue<int> qy;
int n, h, field[1001][1001], vis[1001][1001], dis[1001][1001], dx[4]= {-1, 0, 1, 0}, dy[4]= {0, -1, 0, 1};
bool can_cross(int field[1001][1001]);

int main()
{
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> field[i][j];
        }
    }
    if(can_cross(field)){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    return 0;
}


bool can_cross(int field[1001][1001]){
    int x, y, value;
    dis[0][0] = 1;
    vis[0][0] = 1;
    qx.push(0);
    qy.push(0);
    while(!qx.empty()&&!qy.empty()){
        x = qx.front(); qx.pop();
        y = qy.front(); qy.pop();
        for(int i = 0; i < 4; i++){
            value = field[y][x] - field[y+dy[i]][x+dx[i]];
            if(abs(value) <= h && vis[y+dy[i]][x+dx[i]]!= 1 && y+dy[i] >= 0 && y+dy[i] < n && x+dx[i] >= 0 && x+dx[i] < n){
                qx.push(x+dx[i]);
                qy.push(y+dy[i]);
                vis[y+dy[i]][x+dx[i]]= 1;
                dis[y+dy[i]][x+dx[i]] = dis[y][x] + dis[y+dy[i]][x+dx[i]];
            }
        }
    }
    if(dis[n-1][n-1] != 0){
        return true;
    }else{
        return false;
    }

}
