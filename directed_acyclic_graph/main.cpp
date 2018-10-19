#include <iostream>
#include <stack>

using namespace std;

int  graph[1000][1000], n, visited[1000];
bool dfs(int s);
bool yes = true;
stack <int> mystack;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> graph[i][j];
        }
    }

     if(dfs(1) == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}


bool dfs(int s){

        for(int i = 1; i <= n; i++){
            if(graph[s][i] == 1){
                //cout << "visited ";
                //for(int j = 1; j <= n;j++){cout << visited[j] << " ";}
                if(visited[i] == 1){

                    yes = false;
                    break;
                }else{
                    s = i;
                    visited[i] = 1;

                }
            }
        }


    return yes;
}
