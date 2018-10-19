#include <iostream>
#include <cmath>

using namespace std;

double n, x1, Y1, x3, x2, y2, y3, p, a;
double len(int x, int y, int x2, int y2);

int main()
{
    cin >> n;
    while(n--){
        cin >> x1 >> Y1>> x2 >> y2 >> x3 >> y3;
        p = len(x1, Y1, x2, y2) + len(x2, y2, x3, y3) + len(x3, y3, x1, Y1);
        a = abs((((x2-x1)*(y3-Y1))-((x3-x1)*(y2-Y1)))/2);
        cout << a << " " << p << endl;

    }


    return 0;
}

double len(int x, int y, int x2, int y2){
    return sqrt(pow((x-x2),2)+pow((y-y2),2));
}
