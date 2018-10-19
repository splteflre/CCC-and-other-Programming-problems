#include <iostream>
#include <math.h>

using namespace std;

double h, m, cnt, num;

int main()
{
    cin >> h >> m;

    for(int i = 1; i <= m; i++){
        num = ((-1*6*pow(i, 4)) + (h*pow(i, 3)) + (2*(pow(i, 2))) + i);
        if(num <= 0){
            cnt = i;
            break;
        }
    }
    if(cnt){
        cout << "The balloon first touches ground at hour:" << endl;
        cout << cnt;
    }else{cout << "The balloon does not touch ground in the given time.";}



    return 0;
}
