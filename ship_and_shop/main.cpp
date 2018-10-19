#include <iostream>
#include<algorithm>

using namespace std;
int n = 0;
long long t = 0;
int field[5001][5001];
int cc[5001];
int x = 0;
int y = 0;
int cost = 0;
int k = 0;
int dist[5001];
int flag[5001];
int smallest = 20000;
int temp = 1;
int d = 0;

int main()
{


    fill(dist, dist+5000, 0);
    fill(flag, flag+5000, 0);
    for(int i=0; i<5000; i++)
        for(int j=0; j<5000; j++)
            field[i][j] = 20000;
    fill(cc, cc+5000, 0);

    cin >> n;
    cin >> t;

    for(long long i = 0; i < t; i++){
        cin >> x;
        cin >> y;
        cin >> cost;
        if(cost < field[y][x]){
            field[y][x] = cost;
            field[x][y] = cost;
        }
    }

    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> x;
        cin >> cost;
        cc[x] = cost;
    }

    cin >> d;

    for(int i = 1; i <= n; i++){
        field[i][i] = 0;
        dist[i] = field[d][i];

    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(dist[i] < smallest && flag[i] != 1){
                smallest = dist[j];
                temp = j;
            }
        }

        flag[temp] = 1;

        for(int j = 1; j <= n; j++){
            if(field[temp][j] + dist[temp] < dist[j]){
                dist[j] = field[temp][j];
            }
        }
    }

    smallest = 20000;
    for(int i = 1; i <= n; i++){
        if(dist[i] < smallest && i != d){
            smallest = dist[i];
            temp = i;
        }
    }
    if(smallest + cc[temp] < cc[d]){
        cout << smallest + cc[temp] << endl;
    }
    else{
        cout << cc[temp] << endl;

    }


    return 0;
}
