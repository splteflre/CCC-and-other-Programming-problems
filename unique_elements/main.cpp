#include <iostream>
#include <set>

using namespace std;
int n, temp;
set<int> s;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
    return 0;
}
