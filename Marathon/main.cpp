#include <iostream>

using namespace std;

char input[31][31];
int n, visted[31][31], cnt, flag = 0;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> input[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        if(input[i][j]!= '.' ){
           if(input[i][j] == input[i][j+1] && input[i][j] == input[i][j+2]){
                cout << input[i][j];
                flag = 1;
                break;
           } else if(input[i][j] == input[i+1][j+1] && input[i][j] == input[i+2][j+2]){
                cout << input[i][j];
                flag = 1;
                break;
           } else if(input[i][j] == input[i+1][j] && input[i][j] == input[i+2][j]){
                cout << input[i][j];
                flag = 1;
                break;
           } else if(input[i][j] == input[i+1][j-1] && input[i][j] == input[i+2][j-2]){
                cout << input[i][j];
                flag = 1;
                break;
           } else if(input[i][j] == input[i][j-1] && input[i][j] == input[i][j-2]){
                cout << input[i][j];
                flag = 1;
                break;
           }  else if(input[i][j] == input[i-1][j-1] && input[i][j] == input[i-2][j-2]){
                cout << input[i][j];
                flag = 1;
                break;
           } else if(input[i][j] == input[i-1][j] && input[i][j] == input[i-2][j]){
                cout << input[i][j];
                flag = 1;
                break;
           } else if(input[i][j] == input[i-1][j+1] && input[i][j] == input[i-2][j+2]){
                cout << input[i][j];
                flag = 1;
                break;
           }
        }
        }
        if(flag == 1){
            break;
        }
    }

    if(flag != 1){
        cout << "ongoing" << endl;
    }

    return 0;
}
