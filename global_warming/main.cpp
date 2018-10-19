#include <iostream>
#include <vector>

using namespace std;

vector <int> store(100), diff(100);
int input, cnt, num, temp;
bool flag = false;
bool flag2 = false;
bool changed = false;

int main()
{
    while(true){
        cin >> input;
        if(input == 0){
            break;
        }else if(input == 1){
            cin >> temp;
            cout << 0 << endl;
        }else{
            cnt=0, num=0;
            flag = false;
            flag2 = false;
            changed = false;
            store.clear(); diff.clear();
           for(int i = 1; i <= input; i++){
                cin >> store[i];
                if(i > 1){
                diff[i] = store[i] - store[i-1];
                num++;
                }
           }
           for(int i = 3; i <= num + 3; i++){
                if(diff[2] == diff[i]){
                    changed = true;
                    cnt++;
                    for(int j = 2; j + cnt< num; j++){
                        if(diff[j] != diff[cnt+j]){
                            flag = true;
                            cout << num << endl;
                            break;
                        }

                    }
                    //cout << "was here" << endl;
                    if(flag == false){
                        cout << cnt  << endl;
                        flag2 = true;
                        break;
                    }
                }else{
                    cnt++;
                }
                if(flag2){
                    break;
                }
                if(flag){
                    break;
                }
           }
           if(changed != true){
                cout << num  << endl;
           }
        }
    }

    return 0;
}
