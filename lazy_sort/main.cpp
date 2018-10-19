#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

bool check1(int store[], int n);
bool check2(int store[], int n);
int t, n, store[100000];
deque<int> d;
int main()
{
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> store[i];
        }
        if(check1(store, n)||check2(store,n)){
            cout << "Case #" << i << ": yes" << endl;
        }else{
            cout << "Case #" << i << ": no" << endl;
        }
        for(int i = 0; i < d.size(); i++){
            cout << d[i] << endl;
        }
        d.clear();
        fill(store, store+100000, 0);

    }

    return 0;
}

bool check1(int store[], int n){
    d.push_back(store[0]);
    for(int i = 1; i < n; i++){
        if(store[i]>d.front()){
            if(store[i] > d.back()){
                d.push_back(store[i]);
            }else{
                return false;
            }
        }else if(store[i]<d.front()){
            d.push_front(store[i]);
        }
    }
    return true;
}
bool check2(int store[], int n){
    d.push_back(store[n-1]);
    for(int i = n-1; i >= 0; i--){
        if(store[i]>d.front()){
            if(store[i] > d.back()){
                d.push_back(store[i]);
            }else{
                return false;
            }
        }else if(store[i]<d.front()){
            d.push_front(store[i]);
        }
    }
    return true;
}


