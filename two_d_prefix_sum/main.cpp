#include <iostream>

using namespace std;

int num, prefix[7][7], x1, x2, y1, y2;

int main()
{
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            scanf("%d", &num);
            prefix[i][j] = num - prefix[i-1][j] - prefix[i][j-1] + prefix[i-1][j-1];
        }
    }

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout <<

    return 0;
}
