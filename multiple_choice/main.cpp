#include <iostream>

using namespace std;
char ans[10001], corr[10001];
int num, cnt;
bool flag = false;

int main()
{
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> ans[i];
    }
    for(int i = 0; i < num; i++){
        cin >> corr[i];
        if(corr[i] == ans[i]){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
