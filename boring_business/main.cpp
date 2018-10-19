#include <iostream>

using namespace std;
bool flag = false;
int store[401][401], num;
char dir;

int main()
{
    store[1][200] = 1;
    store[2][200] = 1;
    store[3][200] = 1;
    store[3][201] = 1;
    store[3][202] = 1;
    store[3][203] = 1;
    store[4][203] = 1;
    store[5][203] = 1;
    store[5][204] = 1;
    store[5][205] = 1;
    store[4][205] = 1;
    store[3][205] = 1;
    store[3][206] = 1;
    store[3][207] = 1;
    store[4][207] = 1;
    store[5][207] = 1;
    store[6][207] = 1;
    store[7][207] = 1;
    store[7][206] = 1;
    store[7][205] = 1;
    store[7][204] = 1;
    store[7][203] = 1;
    store[7][202] = 1;
    store[7][201] = 1;
    store[7][200] = 1;
    store[7][199] = 1;
    store[6][199] = 1;
    store[5][199] = 1;
    int now = 5;
    int now2 = 199;

    while(dir != 'q'){
        cin >> dir >> num;
        if(dir == 'l'){

            for(int i = 1; i <= num; i++){
                if(store[now][now2-i] == 1){
                    flag = true;
                    break;
                }
                store[now][now2-i] = 1;
            }
                store[now][now2-num] = 1;
                now2 = now2 - num;
                cout << (now2 - 200) << " " << now *-1;
                if(flag){
                        cout << " DANGER";
                    break;
                }else{
                cout << " safe" << endl;
                }

        }else if(dir == 'd'){
            for(int i = 1; i <= num; i++){
                if(store[now+i][now2] == 1){
                    flag = true;
                    break;
                }
                store[now+i][now2] = 1;
            }
                store[now+num][now2] = 1;
                now = now+num;
                cout << (now2 - 200) << " " << now *-1;
                if(flag){
                        cout << " DANGER";
                    break;
                }else{
                cout << " safe" << endl;
                }


        }else if(dir == 'r'){
            for(int i = 1; i <= num; i++){
                if(store[now][now2+i] == 1){
                    flag = true;
                    break;
                }
                store[now][now2+i] = 1;
            }
                store[now][now2+num] = 1;
                now2 = now2 + num;
                cout << (now2 - 200) << " " << now *-1;
                if(flag){
                    cout << " DANGER";
                    break;
                }else{
                cout << " safe" << endl;
                }


        }else if(dir == 'u'){
            for(int i = 1; i <= num; i++){
                if(store[now-i][now2] == 1){
                    flag = true;
                    break;
                }
                store[now-i][now2] = 1;
            }
                store[now-num][now2] = 1;
                now = now -num;
                cout << (now2 - 200) << " " << now *-1;
                if(flag){
                    cout << " DANGER";
                    break;
                }else{
                cout << " safe" << endl;
                }


            }


    }


    return 0;
}
