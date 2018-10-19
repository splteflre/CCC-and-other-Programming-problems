#include <iostream>
#include <algorithm>


using namespace std;

int degree[10000], lowest = 9999, i;
string city[10000];

int main()
{
    while(true){
        cin >> city[i] >> degree[i];
        lowest = min(lowest, degree[i]);
        if(city[i] == "Waterloo"){
            break;
        }
        i++;

    }

    for(int j = 0; j < i; j++){
        if(degree[j] == lowest){
            cout << city[j] << endl;
        }
    }

    return 0;
}
