#include <iostream>
#include <iomanip>

using namespace std;

float temp, input, first = -1000001;

int main()
{
    cin >> input;
    for(int i = 0; i < input; i++){
        cin >> temp;
        if(temp > first){
            first = temp;
        }
    }

    cout << fixed << setprecision(4) << first << endl;

    return 0;
}
