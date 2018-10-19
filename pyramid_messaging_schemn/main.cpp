#include <iostream>

using namespace std;

int m, n, cnt, total;
string store[1000];
bool reapeated(string store[1000], int length);
int main()
{
    cin >> m >> n;

    for(int i = 0; i < n; i ++){
        cin >> store[i];
    }

    for(int i = 0; i < n; i++){
        if(!reapeated(store, i)){
            cnt++;
        }else{
            total = max(total, cnt);
        }

    }

    cout << m*10*(n-(total*2)) << endl;

    return 0;
}

bool reapeated(string store[1000], int length){
    for(int i = 0; i < length; i++){
        if(store[i] == store[length]){
            return true;
        }
    }
    return false;
}

