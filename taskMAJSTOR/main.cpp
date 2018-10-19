#include <iostream>
#include <stdio.h>

using namespace std;

char temp, sven[50];
int r, n, st[50], rt[50], pt[50], total, biggest, biggest2;

int paper(int i);
int rock(int i);
int scissor(int i);

int main()
{
    scanf("%d", &r);
    for(int i = 0; i < r; i++){
        cin >> sven[i];
    }

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < r; j++){
            cin >> temp;
            if(temp == 'S'){
                st[j]+=1;
            }else if(temp == 'R'){
                rt[j]+=1;
            }else if(temp == 'P'){
                pt[j]+=1;
            }
        }
    }

     for(int i = 0; i < r; i++){
        if(sven[i] == 'S'){
            total = total + (pt[i]*2) + st[i];
        }else if(sven[i] == 'R'){
            total = total + (st[i]*2) + rt[i];
        }else if(sven[i] == 'P'){
            total = total + (rt[i]*2) + pt[i];
        }
    }
    printf("%d\n", total);
    for(int i = 0; i < r; i++){
        biggest2 = max(rock(i), paper(i));
        biggest2 = max(biggest2, scissor(i));
        biggest = biggest + biggest2;

    }

    cout << biggest;
    return 0;
}


int paper(int i){
    int big = (rt[i] *2) + pt[i];

    return big;
}

int rock(int i){
    int big = (st[i]*2) + rt[i];

    return big;
}

int scissor(int i){
    int big = (pt[i] * 2) + st[i];

    return big;

}


