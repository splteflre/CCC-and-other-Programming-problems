#include <iostream>
#include <string>

using namespace std;

string input;
int last[26], value[100000];

int main()
{
    cin >> input;
    fill(last, last+26, -1);
    for(int i = 1; i <= input.length(); i++){
        if(last[input[i-1]-'a'] == -1){
            value[i] = (value[i-1] * 2) + 1;
            last[input[i-1] - 'a'] = i;
        }else{
            value[i] = (value[i-1] * 2) - value[last[(input[i-1] - 'a')] - 1];
            last[input[i-1] - 'a'] = i;
        }
        value[i]%=10007;

    }
    cout << value[input.length()];





    return 0;
}
