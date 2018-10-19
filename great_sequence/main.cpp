#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int n, k, q, a, b, x, y, ps[100001], temp;

bool bsearch(int a, int x, int y);
vector <int> adj[2001];

int main()
{
    cin >> n >> k >> q;
    for(int i = 1; i <= n; i++){
        scanf("%d", &temp);
        adj[temp+1000].push_back(i);
        ps[i] = ps[i-1] + temp;
    }

    for(int i = 0; i < q; i++){
        cin >> a >> b >> x >> y;
        if(ps[y] - ps[x-1] > k){
            vector<int>::iterator pa = lower_bound(adj[a+1000].begin(), adj[a+1000].end(), x);
            vector<int>::iterator pb = lower_bound(adj[b+1000].begin(), adj[b+1000].end(), x);
            //cout << "pa " << *pa << "pb " << *pb << endl;
            if(pa != adj[a+1000].end() && pb != adj[b+1000].end() && *pa >= x && *pa <= y && *pb >= x && *pb <= y){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}
