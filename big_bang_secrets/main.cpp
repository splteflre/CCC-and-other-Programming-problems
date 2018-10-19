#include <iostream>
#include <string>

using namespace std;

int k;
string input;
string better = "";

int main()
{
    cin >> k;
    cin >> input;
    for(int i =0; i < input.length(); i++){
        if((input[i]- 'A') - ((i*3)+k) + 'A' <= 'Z' && (input[i]- 'A') - ((i*3)+k) + 'A' >= 'A'){
            better += ((input[i]- 'A') - ((i*3)+k))+'A';
        }else{
            better += (26-((input[i] - 'A') - ((i*3)+k))%26) + 'A';
        }
    }

    cout << better << endl;

    return 0;
}

