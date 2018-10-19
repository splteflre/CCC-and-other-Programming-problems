#include <iostream>
#include <algorithm>


using namespace std;

string first, second, check, temp2;
int store1[26], store2[26], cnt, temp;

int main()
{
    cin >> first >> second;
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    temp = second.length();
    for(int i = 0; i < temp;i++){
        if(second[i] == '*'){
            second.erase(i, 1);
            i--;
            cnt++;
        }
    }

    for(int i = 0; i < first.length(); i++){
        if(first[i] != second[i] && cnt>0){
            second.insert(i, "*");
            cnt--;
        }
    }
    for(int i = 0; i < temp; i++){
        if(second[i] != first[i]){
            if(second[i] != '*'){
                cout << "N";
                return 0;
            }
        }
    }
    cout << "A";
/*
    cout << first << endl;
    cout << second << endl;
*/

    return 0;
}
/*
cccrocks
socc*rk*
*/
