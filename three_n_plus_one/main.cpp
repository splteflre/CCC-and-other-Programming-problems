#include <iostream>
#include <stdio.h>

using namespace std;

int n, cnt;

int main()
{
    scanf("%d", &n);

    while(n!=1){
        if(n % 2 != 0){
            n = (n * 3) + 1;
        }else{
            n = n/2;
        }
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}
