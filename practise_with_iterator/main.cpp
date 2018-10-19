#include <iostream>
#include <vector>

using namespace std;
extern void test_arr();
void test_arr2();
void test_vector();
void test_vector2();

int arr[6];
vector<int> vec;

int main()
{
    //populate array
    for(int i = 0; i < 6; i++){
        arr[i] = i;
        vec.push_back(arr[i]);
    }


    //test fff
    test_arr();
    test_vector();
    test_arr2();
    test_vector2();

    return 0;
}

void test_vector2(){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";

    }
    cout << endl;
}

void test_vector(){
    vector<int> :: iterator itr = vec.begin();

    while(itr != vec.end()){
        *itr = *itr*10;
        cout << *itr << " ";
        itr++;

    }
    cout << endl;



}

void test_arr(){

    int *it = &arr[0];

    for(int i = 0; i < 6; i++){
        cout << *it << " ";
        it++;
    }
    cout << endl;
}

void test_arr2(){

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
