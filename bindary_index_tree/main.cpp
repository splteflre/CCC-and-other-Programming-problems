#include <iostream>

using namespace std;

const int maxN = 17;
int tree[maxN];
void update(int idx, int val){
    for(int i = idx; i < maxN; i+= i&-i)
        tree[i] += val;
}
int sum(int idx){
    int ans=0;
    for(int i = idx; i; i-=i&-i)
        ans += tree[i];
    return ans;
}

int main()
{

    return 0;
}
