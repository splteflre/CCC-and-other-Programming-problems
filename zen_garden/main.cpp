#include <iostream>

using namespace std;

int n, m, store[100001], total, other, other2;

class both{

    public:
        int x;
        int y;

};

both dis[100001];

int main()
{
    cin >> n;_
    for(int i = 1; i <= n; i++){
        cin >> store[i];
        total += store[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> dis[i].x >> dis[i].y;
        total = total - min(dis[i].y, (min(store[dis[i].x], store[dis[i].x+1])));
    }
    cout << total;


    return 0;
}
