#include <iostream>

using namespace std;

int n, k, store[1000001], keep[1000001], temp;

int main()
{
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> temp;
        store[i] = store[i-1] + temp;
    }
    temp = store[k] - store[0];
    for(int i = 1; i < n - k + 1; i++){
        temp = max(temp, (store[i+k] - store[i]));

    }
    cout << temp;

    return 0;
}
