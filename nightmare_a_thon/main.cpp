#include <iostream>
#include <stdio.h>

using namespace std;

int n, q, store[500003], temp, a, b, big;

struct two{
    int num;
    int occ;
};

two lleft[500003], rright[500003];

int main()
{
    scanf("%d %d", &n, &q);

    for(int i = 1; i <= n; i++){
        scanf("%d", &store[i]);
        if(store[i] > big){
            big = store[i];
            lleft[i].num = big;
            lleft[i].occ = 1;
        }else if(store[i] == big){
            lleft[i].occ += lleft[i-1].occ + 1;
        }
    }
    big = 0;
    for(int i = n; i > 0; i--){
        if(store[i] > big){
            big = store[i];
            rright[i].num = big;
            rright[i].occ = 1;
        }else if(store[i] == big){
            rright[i].occ+= rright[i-1].occ + 1;
        }
    }

    for(int i = 0; i < q; i++){
        scanf("%d %d", &a, &b);
        if(lleft[a-1].num > rright[b-1].num){
            printf("%d %d", lleft[a-1].num, lleft[a-1].occ);
            }
        else if(lleft[a-1].num == rright[b-1].num){
            printf("%d %d", lleft[a-1].num, (rright[b-1].occ + lleft[a-1].occ));
        }
        else{
            printf("%d %d", rright[b-1].num, rright[b-1].occ);
        }
    }

    return 0;
}
