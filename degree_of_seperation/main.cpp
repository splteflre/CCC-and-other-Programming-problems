#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

queue <int> myq;
int store[100][100];
int a[22] = {1,2,6,3,4,5,3,4,7,3,3,8,9,9,15,12,12,11,13,16,16,18};
int b[22] = {6,6,7,6,6,6,4,5,8,5,15,9,10,12,13,13,11,10,14,18,17,17};
char act;


void insertedge(int x, int y){
    store[x][y] = 1;
    store[y][x] = 1;
}

int main()
{
    for(int i = 0; i < 22; i++){
        insertedge(a[i], b[i]);
    }
    store[1][6] = 1;
    store[6][1] = 1;
    store[2][6] = 1;
    store[6][2] = 1;
    store[6][3] = 1;
    store[6][4] = 1;
    store[6][5] = 1;
    store[6][7] = 1;
    store[3][6] = 1;
    store[3][4] = 1;
    store[4][3] = 1;
    store[3][15] = 1;
    store[15][3] = 1;
    store[3][5] = 1;
    store[5][3] = 1;
    store[4][5] = 1;
    store[4][6] = 1;
    store[5][4] = 1;
    store[5][6] = 1;
    store[15][13] = 1;
    store[13][15] = 1;
    store[13][12] = 1;
    store[13][14] = 1;
    store[14][13] = 1;
    store[12][13] = 1;
    store[12][9] = 1;
    store[12][11] = 1;
    store[11][12] = 1;
    store[11][10] = 1;
    store[10][11] = 1;
    store[10][9] = 1;
    store[9][10] = 1;
    store[9][12] = 1;
    store[9][8] = 1;
    store[8][9] = 1;
    store[8][7] = 1;
    store[7][8] = 1;
    store[7][6] = 1;
    store[16][18] = 1;
    store[16][17] = 1;
    store[18][16] = 1;
    store[18][17] = 1;
    store[17][16] = 1;
    store[17][18] = 1;

    while(act != 'q'){
        cin >> act;
        if(act == 'i'){
            int x, y;
            cin >> x >> y;
            store[x][y] = 1;
            store[y][x] = 1;
        }else if(act == 'd'){
            int x, y;
            cin >> x >> y;
            store[x][y] = 0;
            store[y][x] = 0;
        }else if(act == 'n'){
            int total = 0, x;
            cin >> x;
            for(int i = 0; i < 51; i++){
                if(store[x][i] == 1){
                    total++;
                }
            }
            cout << total << endl;
        }else if(act == 'f'){
            int x, t = 0, offriends[51], visited[51];
            fill(visited, visited+51, 0);
            fill(offriends, offriends+51, 0);
            cin >> x;
            for(int i = 1; i <= 50; i++){
                if(store[x][i] == 1){
                    for(int j = 1; j <= 50; j++){
                        if(store[i][j] == 1 && store[x][j] != 1 && visited[j] != 1 && j!=x){
                            t++;
                            //cout << j << " j";
                            visited[j] = 1;
                        }
                    }

                }
            }
            cout << t << endl;
        }else if(act == 's'){
            int x , y, visited[51], dist[51];
            fill(visited, visited+51, 0);
            fill(dist, dist+51, -1);
            cin >> x >> y;
            myq.push(x); dist[x]=0;
            while(!myq.empty()){
                if(myq.front() == y){
                    cout << dist[y] << endl;
                    break;
                }
                for(int i = 1; i <= 50; i++){
                    if(store[myq.front()][i] == 1 && visited[i] != 1){
                        myq.push(i);
                        dist[i] = dist[myq.front()] + 1;
                        visited[i] = 1;
                    }
                }
                myq.pop();
            }
            if(dist[y] == -1){
                cout << "Not connected" << endl;
            }
        }

    }







    return 0;
}
