#include <iostream>

using namespace std;

int n, high, low, mid, store[1000], num;

int main()
{
    cin >> n;
    high = n-1;
    low = 0;
    for(int i = 0; i < n; i++){
        cin >> store[i];
    }
    cin >> num;
    while(low <= high){
        mid = (high + low )/ 2;
        if(store[mid] == num){
            cout << mid+1 << endl;
            return 0;
        }else if(store[mid] > num){
            high = mid - 1;
        }else if(store[mid] < num){
            low = mid + 1;
        }
    }
    cout << -1 << endl;

    return 0;
}
