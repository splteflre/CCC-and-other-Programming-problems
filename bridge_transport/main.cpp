#include <iostream>
#include <stdio.h>

using namespace std;

int w, n, t, store[100001], total, temp;

int main()
{
    cin >> w >> n;

    for(int i = 0; i < n; i++){
        cin >> store[i];
    }
    if(n >= 4){
        total = total + store[0] + store[1] + store[2] + store[3];
        if(total <= w){
        while(total <= w && temp <= n-4){
            total = total - store[temp];
            total = total + store[temp+4];
            temp++;
            t++;
        }
        cout << t+3;
        }else{
        int temp2 = 0;
        for(int i = 0; i < n; i++){
                temp2 += store[i];
                if(temp2 > w){
                    break;
                }
                t++;
            }
            cout << t;
        }
    }else{
        for(int i = 0; i < n; i++){
            total = total + store[i];
        }
        if(total <= w){
            cout << n;
        }else{
            for(int i = 0; i < n; i++){
                if(store[i] < w){
                    t++;
                }else{
                    break;
                }
            }
            cout << t;
        }
    }


    return 0;
}
