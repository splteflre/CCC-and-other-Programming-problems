#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

double temp, input, first = 1001;

int main()
{
    cin >> input;
    for(int i = 0; i < input; i++){
        cin >> temp;
        first = min(temp, first);
    }
    cout << fixed << setprecision(2) << first << endl;

    return 0;
}
