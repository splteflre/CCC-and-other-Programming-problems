#include <iostream>
#include <math.h>

using namespace std;

long long sz, t, mag, x, y, X, Y;

int main()
{
    cin >> t;
    while(t--){
        cin >> mag >> x >> y;
        sz = pow(5, mag-1);
        X= x/sz;
        Y=y/sz;
        if(X == 1 && Y == 0 || X == 2 && Y == 0 || X == 3 && Y == 0 || X == 2 && Y == 1){
            cout << "crystal" << endl;
        }else if(X == 1 && Y == 1 || X == 2 && Y == 2 ||X == 3 && Y == 1 || X == 2 && Y == 2){
            while()
            X = x%sz;
            Y = y%sz;
            if(X == 1 && Y == 0 || X == 2 && Y == 0 || X == 3 && Y == 0 || X == 2 && Y == 1){
                cout << "crystal" << endl;
            }else{cout << "empty" << endl;}
        }else{cout << "empty" << endl;}
    }
    return 0;
}
