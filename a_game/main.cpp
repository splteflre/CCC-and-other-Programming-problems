#include <iostream>
#include <cstring>
using namespace std;

int n, store[1001], dp[1001][1001], sum[1001];

int do_dp(int l, int r);

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> store[i];
    }
    //prefix sum
    for(int i = 1; i <= n; i++){
        sum[i] = sum[i-1] + store[i];
    }
    memset(dp,-1,sizeof dp);
    cout << do_dp(1, n);

    return 0;
}


int do_dp(int l, int r){
    if(dp[l][r] != -1) return dp[l][r];
    if(l == r){
        return dp[l][r] = store[l];
    }else{
        int a = max(sum[r] - sum[l-1] - do_dp(l+1,r), sum[r] - sum[l-1] - do_dp(l,r-1));
        dp[l][r] = a;
        return a;
    }
}
