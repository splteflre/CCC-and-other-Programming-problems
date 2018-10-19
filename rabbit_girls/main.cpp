#include <iostream>

using namespace std;

long long n, k, num1, num2, t;

int main()
{
    cin >> n;
    cin >> k;

    if(n > k){
    num1 = n%k;
    num2 = (((n/k)+1)*k) - n;

    if(num1 < num2){
        cout << num1;
    }else{
        cout << num2;
    }

    }else{
        cout << k - n;
    }
    return 0;
}
