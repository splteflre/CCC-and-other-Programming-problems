#include <iostream>
#include <queue>

using namespace std;

int t, c, r, visited[21][21], sum[21][21];
char store[21][21];
queue <int> qx;
queue <int> qy;

int main()
{
    cin >> t >> c >> r;
    for(int i = 0 ; i < c; i++){
        for(int j = 0; j < r; j++){
            cin >> store[i][j];
        }
    }
    qx.push(0);
    qy.push(0);
    while(!qx.empty() && !qy.empty()){
        int x = qx.front();
        int y = qy.front();
        qx.pop();
        qy.pop();
        if(store[y][x] == '')

    }


    return 0;
}
