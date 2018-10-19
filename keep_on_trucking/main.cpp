#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

vector<int> store;
int input1, input2, input3, temp, ans[1000];




int main()
{
    store.push_back(0);
    store.push_back(990);
    store.push_back(1010);
    store.push_back(1970);
    store.push_back(2030);
    store.push_back(2940);
    store.push_back(3060);
    store.push_back(3930);
    store.push_back(4060);
    store.push_back(4970);
    store.push_back(5030);
    store.push_back(5990);
    store.push_back(6010);
    store.push_back(7000);


    cin >> input1;
    cin >> input2;
    cin >> input3;

    if(input3 != 0){
        for(int i = 0; i < input3; i++){
            cin >> temp;
            store.push_back(temp);
        }
    }
    sort(store.begin(), store.end());

    ans[0] = 1;

    for(int i = 0; i < store.size(); i++){
        for(int j = i; j < store.size(); j++){
        /*
            if(store[i] + input2 < store[j+1]){
                break;
            }else if(store[i] + input1 <= store[j+1] && store[i] + input2 >= store[j+1]){
                store[j+1] = store[i] + store[j+1];
            }*/
            if(store[i] + input1 <= store[j+1]){
                if(store[i] + input2 >= store[j+1]){
                    ans[j+1] = ans[i] + ans[j+1];
                }else{
                    break;
                }
            }
        }
    }

    /*for(int i = 0; i < store.size(); i++){
        cout << ans[i] << endl;

    }*/

    cout << ans[13+input3] << endl;




    return 0;
}
