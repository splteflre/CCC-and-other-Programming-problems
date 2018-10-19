#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int n, m;
vector<int> v;
void factor(int m);
bool prime(int m);

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(prime(m)){
            cout << m << endl;
        }else{
            factor(m);
            cout << endl;
        }

    }

    return 0;
}

void factor(int m){

    int num = sqrt(m);
    for(int i = 2; i <= num;){
        if(m % i == 0){
            cout << i << " ";
            m/=i;
        }
        else{
            i++;
        }
    }
    if(m != 1){
        cout << m;
    }
}

bool prime(int m){
    if(m == 2 || m == 1){
        return true;
    }
    int num = sqrt(m);
    for(int i = 2; i < num; i++){
        if(m % i == 0){
            return false;
        }
    }
    return true;
}


