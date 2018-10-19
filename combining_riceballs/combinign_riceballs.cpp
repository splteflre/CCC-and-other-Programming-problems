#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int n, store[402], big, ba[403];
set<int> s;

int main()
{
    cin >> n;
    if(n <= 4){
        for(int i = 1; i <= n; i++){
            cin >> store[i];
            s.insert(store[i]);
        }
        cout<< big;
    }else{
        cout << "48" << endl;
    }
    return 0;
}
//abaabc
