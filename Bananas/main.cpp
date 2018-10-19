#include <iostream>

using namespace std;

string input = "";

int main()
{

    while(input != "X"){
        cin >> input;
        if(input == "X"){break;}
        while(true){
            if(input.find("ANA") != -1){
                int pos = input.find("ANA");
                input.replace(pos, 3, "A");
            }else if(input.find("BAS") != -1){
                int pos = input.find("BAS");
                input.replace(pos, 3, "A");
            }
            else{
                break;
            }
        }
        if(input == "A"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }




    return 0;
}
