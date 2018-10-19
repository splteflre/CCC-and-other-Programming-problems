#include <iostream>


using namespace std;

int n = 0;
int field[9999][9999];
int check[9999];
int temp1 = 9, temp2 = 9;


int main()
{
    check[1] = 1;
    cin >> n;
    while(temp1 != 0 && temp2 != 0){
        cin >> temp1 >> temp2;
        field[temp1][temp2] = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(field[i][j] == 1){
                check[j] = check[j] + check[i];
            }
        }

    }
    cout << check[n] << endl;

    return 0;
}
