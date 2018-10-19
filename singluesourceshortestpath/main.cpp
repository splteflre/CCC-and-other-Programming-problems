#include <iostream>

using namespace std;

int main()
{
    long long n = 0;
    long long m = 0;
    long long field[10000][10000];
    long long dist[10000];
    long long flag[10000];
    long long x = 0;
    long long y = 0;

    fill(&field[0][0], &field[9999][9999], 10000);
    fill(&dist[0], &dist[9999], 10000);
    fill(&flag[0], &flag[9999], 0);
    dist[1] = 0;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        field[i][i] = 0;

    }

    for(int i = 0; i < m; i++){
        cin >> y >> x;
        int temp = 0;
        cin >> temp;
        if(temp < field[y][x])
        field[y ][x ] = temp;
        field[x][y] = field[y][x];

     }

    for(int i = 1; i <= n; i++){
            int smallest = 1000;
            int temp = 0;
        //cout << "round " << i << endl;
        for(int j = 1; j <= n; j++){
            if(dist[j] < smallest && flag[j] != 1){
                temp = j;
                smallest = dist[j];
            }
        }
        //cout << " "<< temp << endl;

        flag[temp] = 1;

        for(int j = 1; j <= n; j++){
            if(field[temp][j] + dist[temp] <= dist[j]){
                dist[j] = field[temp][j] + dist[temp];
            }
        }

    }


    for(int i = 1 ; i <= n; i++){
        if(dist[i] == 1000){
            cout << -1 << endl;

        }else{
            cout << dist[i] << endl;
        }

    }

    return 0;
}
