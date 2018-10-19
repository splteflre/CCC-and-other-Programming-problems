#include <iostream>

using namespace std;

int l, store[51][51], dp[51], cnt[51], input[51];
int bubble(int store[51][51]);

int main()
{
    cin >> l;

    for(int i = 0; i < l; i++){
        cin >> input[i];
        for(int j = 0; j < input; j++){
            cin >> store[i][j];
        }
    }
    for(int i = 0; i < l; i++){
        cnt[i] = bubble(store, input[i], i);

    }

    return 0;
}

int bubble(int store[51][51], int input, int j){
    int cnt = 0;
    while(true){
        check = cnt;
        for(int i = 0; i < input; i++){
            if(store[j][i] > store[i+1]){
                cnt++;
                int temp = store[i];
                store[i] = store[i + 1];
                store[i + 1] = temp;
            }
        }
        if(check = cnt){
            break;
        }
    }
    return cnt;
}
