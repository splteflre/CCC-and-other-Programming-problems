#include <iostream>
#include <vector>

using namespace std;

int k, a, b, dp[100001], t;
vector<int> adj[100001];

void filldp(int a, int b);

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> k >> a >> b;
        filldp(a, b);

    }

    return 0;
}

void filldp(int a, int b){
    int cnt = 1;
    for(int i = a; i <= b; i++){
        for(int n = i; n <= b; n+=i){
            dp[n]++;
        }
        adj[dp[i]].push_back(i);
    }

}
