#include <iostream>

using namespace std;

int n, k, store[200], t;

int main()
{
    cin >> n;
    cin >> k;

    for(int i = 0; i < k; i++){
        store[i] = 1;
    }
    n = n - k;
    store[0] += n;


    for(int i = 0; i < k - 1; i++){
        while(store[i] != store[i+1]){
            for(int j = i+1; j < k; j++){
                if(store[i] - 1 >= store[j] + 1 && store[i] - 1 >= store[i+1]){
                    t+=1;
                    store[i] -= 1;
                    store[j] += 1;
                }else if(store[i] - 1 < store[j] + 1){
                    break;
                }
            }
        }
    }


    for(int i = 0; i < k; i++){
        cout << store[i] << endl;
    }

    cout << t;

    return 0;
}
