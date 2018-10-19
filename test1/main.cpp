#include <iostream>

using namespace std;

 int b = 8;
extern int d = 6;
extern int func1();
void fun(){
    int c = 0;
    static int a = 10;
    a++;
    c++;
    cout << a << ", c " << c << endl;

}

int main()
{
    extern int e;
    for(int i = 0; i < 5; i++){
        fun();
    }
    cout << b << " d " << d << " e " << e << endl;
    func1();
    return 0;
}
