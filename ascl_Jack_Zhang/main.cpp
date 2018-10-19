#include <iostream>
#include <math.h>

using namespace std;

int a[2], b[2] ,c[2];
string d[2] , e[2] , f[2];
string num[3];

string tob(int a);
string backward(string a);
string func(string a);
int normal(string a);
string tob2 (string a);

int main()
{
    cin >> a[0] >> b[0] >> c[0];
    cin >> a[1] >> b[1] >> c[1];
    cin >> d[0] >> e[0] >> f[0];
    cin >> d[1] >> e[1] >> f[1];
    cin >> num[0] >> num[1] >> num[2];


    cout << tob(a[0]) << " "
    << tob(b[0]) << " "
    << tob(c[0]) << " and "
    << func(tob(a[0])) << " " << func(tob(b[0])) << " " <<
    func(tob(c[0])) << endl;

    cout << tob(a[1]) << " "
    << tob(b[1]) << " "
    << tob(c[1]) << " and "
    << func(tob(a[1])) << " " << func(tob(b[1])) << " " <<
    func(tob(c[1])) << endl;
//cout << "d[0] " << d[0] << " e[0] " << e[0] << " f[0] " << f[0] << endl;
    cout << normal(d[0]) << normal(e[0]) << normal(f[0]) << " and " << func(d[0]) << " " << func(e[0]) << " " << func(f[0]) << endl;

    cout << normal(d[1])
    << normal(e[1])
    << normal(f[1]) << " and "
    << func(d[1]) << " " << func(e[1]) << " " <<
    func(f[1]) << endl;

    cout << normal(tob2(num[0])) << normal(tob2(num[1])) << normal(tob2(num[2])) << " and " << tob2(num[0]) << " " << tob2(num[1]) << " "<< tob2(num[2]);



   // cout << normal("101");

    return 0;
}

string tob(int a){
    string o1 = "";
    for(int i = 0; i < 3; i++){
        o1 += ('0' + a%2);
        a = a/2;
    }
    return backward(o1);
}

string backward(string a){
    int temp = a.length();
    string better = "";
    for(int i = temp-1; i >=0; i--){
        better +=a[i];
    }
    return better;
}

string func(string a){
    string out = "";
    char store[3] = {'r', 'w', 'x'};
    for(int i = 0; i < 3; i++){
        if(a[i] == '0'){
            store[i] = '-';
        }
    }
    for(int i = 0; i < 3; i++){
        out += store[i];
    }
    return out;
}

int normal(string a){
    //cout << "a " << a << endl;
    int out = 0;
    for(int i = 0; i <3; i++){
        if(a[i] == '1'){
            //cout << "i " << i << endl;
            out += pow(2, (double)(2-i));
        }
    }

    return out;
}

string tob2 (string a){
    string out = "";
    for(int i = 0; i < 3; i++){
        if(a[i] == '-'){
            out += '0';
        }else{
            out += '1';
        }
    }
    return out;
}
