#include <iostream>

using namespace std;

long long n , m, d, a, b;
long long field[500001][500001];
fill(field[0][0], field[500001][500001], 10001);
long long cindy[500001][500001];
fill(cindy[0][0], field[500001][500001], 10001);
long long dis1[500001];
long long dis2[500001];
fill(dis1[0], dis1[500001], 10001);
fill(dis2[0], dis2[500001], 10001);
int flag[500001];
fill(flag[0], flag[500001], 0);
int k, smallest, temp;

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> a >> b;
        cin >> k;
        field[a][b] = k;
        field[b][a] = k;
    }
    cin >> d;
    for(int i = 1; i <= d; i++){
        cin >> a >> b;
        cin >> k;
        field[a][b] = k;
        field[b][a] = k;
    }

    for(int i = 1; i <= n; i++){
        dist1[i] = field[1][i];
    }

    smallest = 10001;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            if(dis1[i] < smallest){
                smallest dis1[i];
                temp = i;
            }
        }


    }

    return 0;
}
