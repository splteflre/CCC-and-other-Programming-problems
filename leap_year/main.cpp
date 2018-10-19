#include <iostream>

using namespace std;

int input, num;

int main()
{
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> input;
        if(input == 0){
            cout << 1 << endl;
        }else if(input %400 == 0){
                    cout << 1 << endl;
                }
        else if(input%4 == 0 && input%100 != 0){
            if(input >= 400){
                    cout << 1 << endl;

            }else{
                cout << 1 << endl;
            }
        }else{
            cout << 0 << endl;
        }

    }
    return 0;
}
