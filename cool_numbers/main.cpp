#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
float a, b, total;

int main()
{
    scanf("%f %f", &a, &b);
    for(int i = 1; i < b; i++){
        if(pow(i, 6) >= a && pow(i, 6) <= b){
            total++;
        }else if(pow(i, 6) > b){
            break;
        }
    }
    printf("%d", (int)total);


    return 0;
}
