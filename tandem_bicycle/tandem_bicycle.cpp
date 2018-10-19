#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int p, n, temp, total;
vector<int> dmoj;
vector<int> peg;
int main()
{
    cin >> p >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        dmoj.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        cin >> temp;
        peg.push_back(temp);
    }
    sort(dmoj.begin(), dmoj.end());
    sort(peg.begin(), peg.end());

    if(p == 1){
        for(int i = 0; i < n; i++){
            if(dmoj[i] > peg[i]){
                total += dmoj[i];
            }else{
                total += peg[i];
            }
        }
    }else if(p==2){
        reverse(peg.begin(), peg.end());

         for(int i = 0; i < n; i++){
            if(dmoj[i] > peg[i]){
                total += dmoj[i];
            }else{
                total += peg[i];
            }
        }

    }

    cout << total;
    return 0;
}
/*
2
5
202 177 189 589 102
17 78 1 496 540


*/
