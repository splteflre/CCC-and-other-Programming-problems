#include <iostream>

using namespace std;

int num1, num2, num3, cnt;

int main()
{
    cnt = 2;
    cin >> num1 >> num2;

    while(num1 - num2 < num2){
        num3 = num1 - num2;
        num1 = num2;
        num2 = num3;
        cnt++;

    }
    cout << cnt+1;


    return 0;
}
