#include <iostream>

using namespace std;


vector<string> adj[27];
vector<string> store;
int n, l, temp;

void plswork(int row, int co, int l){

}

int main()
{
    cin >> n >> l;
    for(int i = 0, m = 0; i < n; i++){
        cin >> m;
        for(int j = 0; j < m; i++){
            cin >> temp;
            adj[i][j].push_back(temp);
        }
    }
    for(int i = 0; i < adj[0].size(); i++){
        plswork(0,i, l);
    }


    return 0;
}

