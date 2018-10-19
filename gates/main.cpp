#include <iostream>
#include <set>

using namespace std;

int g, p, n, cnt;
set<int> port;
set<int>::iterator pa;

int main()
{
    cin >> g >> p;
    for(int i = 1; i <= g; i++){
        port.insert(i);
    }
    for(int i = 0; i < p; i++){
        cin >> n;
        pa = port.upper_bound(n);
        if(pa == port.begin()){
            break;
        }else{
            cnt++;
            port.erase(--pa);
        }

    }
    cout << cnt << endl;

    return 0;
}
