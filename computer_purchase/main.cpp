#include <iostream>

using namespace std;

class comp{
    string name;
    int v;
};
string name1, name2, name;
int n, ram, cpu, d, value, first, second;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name >> ram >> cpu >> d;
        value = (2*ram) + (3*cpu) + d;
        if(value == first){
            if(name < name1){
                name2 = name1;
                name1 = name;
            }
        }else if(value > first){
            second = first;
            name2 = name1;
            name1 = name;
            first = value;
        }else if(value == second){
            if(name < name2){
                name2 = name;
            }
        }else if(value > second){
            name2 = name;
            second = value;

        }
    }
    cout << name1 << endl;
    cout << name2 << endl;

    return 0;
}
