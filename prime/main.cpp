#include <iostream>

using namespace std;

int input, num, start = 3;
bool notprime = false;

int main()
{
    cin >> input;
    cout << "2" << endl;
    while(num != input-1){
        for(int i = 2; i < start; i++){
            if(start%i == 0){
                notprime = true;
                break;
            }
        }
        if(!notprime){
            cout << start << endl;
            num++;
        }
        start++;
        notprime = false;
    }

    return 0;
}
