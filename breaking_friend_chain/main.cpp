#include <iostream>
#include <queue>
#include <vector>
#include <stdio.h>

using namespace std;

int n, m, dis[10001], vis[10001], a, b, use, total;
queue <int> myq;
vector <vector<int> > store;

int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        store.insert(a);
        store.insert(b);
        store[a].push_back(b);
        store[b].push_back(a);
    }
    cin >> a >> b;
    myq.push(a);
    while(!myq.empty()){
            use = myq.front();
            myq.pop();
            for(int i = 1; i <= n; i++){
                    if(store[use][i] == b){
                        total++;
                    }else{
                        myq.push(store[use][i]);
                        vis[store[use][i]] = 1;
                    }
                }
            }

    cout << total << endl;

    return 0;
}
