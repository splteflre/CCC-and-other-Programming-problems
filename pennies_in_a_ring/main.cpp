#include <iostream>
#include <cmath>

using namespace std;

double r = 1, y;
int cnt;

int main()
{
    while(r){
        cin >> r;
        if(r){
            for(int i = -r; i <= r; i++){
                y = sqrt(pow(r,2) - pow(i,2));
                cnt+= (int)y*2 + 1;
            }
            cout << cnt << endl;
        }
        cnt=0;
    }


    return 0;
}
