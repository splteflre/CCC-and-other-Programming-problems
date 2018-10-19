#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string line1, line2;
int temp = 0, biggest;
bool flag = true;

int main()
{
    getline(cin, line1);
    getline(cin, line2);

    sort(line1.begin(), line1.end());
    sort(line2.begin(), line2.end());

    biggest = max(line1.size(), line2.size());

    for(int i = 0; i < biggest; i++){
        if(line1[i] == ' '){
            line1.erase(i, 1);
        }if(line2[i] == ' '){
            line2.erase(i, 1);
        }
    }

    for(int i = 0; i < line1.size(); i++){
        if(line1[i] != line2[i]){
            flag = false;
        }
    }

    if(flag){
        cout << "Is an anagram." << endl;
    }else{
        cout << "Is not an anagram." << endl;
    }


    return 0;
}
