#include <iostream>
#include <stack>
#include <queue>

using namespace std;

stack<int> ms;
int num;
string output = "";

int main()
{
    int input;
    cin >> input;

    for(int i = 0; i < input; i++){
        cin >> num;
        if(num == 0){
            cout << "0000";
        }else{
        while(num != 0){
            if(num % 2 == 0){
                ms.push(0);
            }else {
                ms.push(1);
            }
            num = num / 2;
        }
        int temp = ms.size();
        int cnt = 0;
        for(int j = 0; j < temp; j++){
            output = output + (char)(ms.top()+'0');
            ms.pop();
        }
        if(temp % 4 != 0){
            string better = "";
            for(int j = 0; j < 4 - temp % 4; j++){
                better = better + '0';
            }
            for(int k = 0; k < output.size(); k++){
                if(cnt == 4){
                    cnt = 0;
                    better = better + ' ';
                }
                better = better + output[k];
                cnt++;
            }
            output = better;

        }else{
            string better = "";
            for(int j = 0; j < output.size(); j++){
                if(cnt == 4){
                    cnt = 0;
                    better = better + ' ';
                }
                better = better + output[j];
                cnt++;
            }
            output = better;
        }

        cout << output << endl;
        output = "";

        }
    }




    return 0;
}
