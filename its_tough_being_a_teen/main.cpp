#include <iostream>
#include <vector>

using namespace std;
int graph[1000][1000] = {0,0,0,1,0,0,1,
                         1,0,0,0,0,0,0,
                         0,0,0,1,1,0,0,
                         0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,};
int a = 1, b = 1;
int f[7] = {1,0,0,2,0,0,1};
bool ok = false;
vector <int> topo(f, f+7);
int main()
{
    while(a != 0 && b != 0){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }else{
        graph[a-1][b-1];
        topo[b-1]++;
        }

    }
    for(int i = 0; i < 7; i++){
        if(topo[i] == 0){
            ok = true;
        }
    }
    if(ok){
    while(true){
        for(int i = 0; i < 7; i++){
            if(topo[i] == 0){
                cout << i+1 << " ";
                for(int j = 0; j < 7; j++){
                    if(graph[i][j] == 1){
                        topo[j]--;
                    }
                }
                topo.erase (topo.begin()+i);
                //f[i] = -1;
            }
        }

    }
    }else{
        cout << "Cannot complete these tasks. Going to bed.";
    }

    return 0;
}
