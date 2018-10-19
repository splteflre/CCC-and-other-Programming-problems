#include <iostream>

using namespace std;

int t, n, big, temp;

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> temp;
            big = max(big, temp);
        }
        cout << big << endl;
        big = 0;
    }

    return 0;
}
