#include <iostream>

using namespace std;

int n;
string input;

int main()
{
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> input;
        if(input == "Foxen"){
            break;
        }else{
            if(input == "Rock"){
                cout << "Paper" << endl;
            }else if(input == "Paper"){
                cout << "Scissors" << endl;
            }else if(input == "Scissors"){
                cout << "Rock" << endl;
            }else if(input == "Fox"){
                cout << "Foxen" << endl;
            }
        }
    }
    return 0;
}
