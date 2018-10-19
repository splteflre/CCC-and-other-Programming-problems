#include <iostream>

using namespace std;

int a, b, c, d, e, nikky, byron, steps1, steps2, a2, b2, c2, d2;
bool up1 = true, down1 = false, up2 = true, down2 = false;

int main()
{
    cin >> a >> b >> c >> d >> e;
    for(; steps1 < e; steps1++){
        if(a2 != a && up1){
            nikky++;
        }else if(a2 == a){
            a2 = 0;
            up1 = false;
            down1 = true;
        }else if(b2 != b && down1){
            nikky--;
        }else if(b2 == b){
            b2 = 0;
            up1 = true;
            down1 = false;

        }
        if(up1){
            a2++;
        }else if(down1){
            b2++;
        }

    }
    cout << "nikky " << nikky<< endl;

    for(; steps2 < e; steps2++){
        if(c2 != c && up2){
            byron++;
        }else if(a2 == a){
            c2 = 0;
            up2 = false;
            down2 = true;

        }else if(d2 != d && down2){
            byron--;
        }else if(d2 == d){
            d2 = 0;
            up2 = true;
            down2 = false;
        }
        if(up2){
            c2++;
        }else if(down2){
            d2++;
        }
    }
    cout << "byron " << byron << endl;

    if(nikky>byron){
        cout << "Nikky" << endl;
    }else if(nikky == byron){
        cout << "Tied" << endl;
    }else if(nikky < byron){
        cout << "Nikky" << endl;
    }


    return 0;
}
