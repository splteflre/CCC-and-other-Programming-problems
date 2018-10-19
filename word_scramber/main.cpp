#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string input;
vector<char> p;

int main()
{
    cin >> input;
    for(int i = 0; i < input.length(); i++)
        p.push_back(input[i]);
    sort(p.begin(), p.end());
    do {
        for(int i = 0; i < p.size(); i++){
            cout << p[i];
        }
        cout << endl;
    } while (next_permutation(p.begin(),p.end()) );


    return 0;
}
