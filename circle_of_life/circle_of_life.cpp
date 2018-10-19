#include <iostream>

using namespace std;
int n, t, cnt = 0, cell[1000000];
string temp;
int main()
{
    cin >> n >> t;
    cin >> temp;

    for(int i = 0; i < n; i++){
        //cout << temp[i]-'0';
        cell[i]=temp[i]-'0';
    }
    while(cnt<t){
        int cell2[16];
        for(int i = 0; i < n; i++){
            if(i == 0){
                //cout << "was here" << endl;
                if((cell[n-1] == 1 && cell[i+1]==0 )|| (cell[n-1] == 0 && cell[i+1]==1) ){
                    cell2[i] = 1;
                }else{
                    cell2[i] = 0;
                }
            }else if(i == n-1){
                if((cell[i-1] == 1 && cell[0]==0 )|| (cell[i-1] == 0 && cell[0]==1) ){
                    cell2[i] = 1;
                }else{
                    cell2[i] = 0;
                }
            }else{
                if((cell[i-1] == 1 && cell[i+1] ==0)|| (cell[i-1] == 0 && cell[i+1] ==1)){
                    cell2[i]=1;
                }else{
                    cell2[i] = 0;
                }
            }
        }
        cnt++;
        for(int i = 0; i < n; i++){
            cell[i] = cell2[i];
        }
    }
    for(int i = 0; i < n; i++){
        cout << cell[i];
    }

    return 0;
}/*
*/
/*
7 1
0000001
*/
