#include <iostream>

using namespace std;

int storage[100000];
long long input;
string name;


int main()
{
    cin >> input;

    for(long long j = 0; j < input; j++){
        cin >> name;
        for(int i = 0; i < name.length(); i++){
            storage[i] += name[i] - 'a' + 1;
        }
    }
    for(long long j = 0; j < input - 1; j++){
        cin >> name;
        for(int i = 0; i < name.length(); i++){
            storage[i] -= name[i] - 'a' + 1;
        }
    }

    for(int i = 0; i < 20; i++){
        if(storage[i] > 0){
            cout << (char)(storage[i] - 1 + 'a');
        }
    }








    return 0;
}
