#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int n, store[1001], pl, ph, high, low = 100001;
bool flag = false;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> store[i];
        if(store[i] > high){
            ph = i;
            high = store[i];
        }
        if(store[i] < low){
            pl = i;
            low = store[i];
        }
    }
    //cout << "pl " << pl << "ph " << ph << endl;
    if(pl > ph){
        flag = true;
    }else{
        for(int i = pl; i < ph - 1; i++){
                //cout << "store[i] " << store[i] << " store[i+1] " << store[i+1] << endl;
            if(store[i] > store[i+1]){
                flag = true;
            }
        }
    }
    if(flag){
        cout << "unknown" << endl;
    }else{
        cout << abs(store[ph] - store[pl]) << endl;
    }


    return 0;
}
