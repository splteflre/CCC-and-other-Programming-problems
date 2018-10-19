#include <iostream>
#include <set>
#include <stdio.h>

using namespace std;

set<int> myset;
int n, temp;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        myset.insert(temp);
    }
    printf("%d", myset.size());

    return 0;
}
