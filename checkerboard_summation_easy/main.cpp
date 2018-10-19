#include <iostream>
#include <stdio.h>

using namespace std;

int board[3001][3001], white[3001][3001], black[3001][3001], m, n, c, r, x, c1, c2, r1, r2;

int main()
{
    scanf("%d %d", &m, &n);
    c=1;
    r=1;
    x=1;
    while(c!= 0 && r != 0 && x != 0){
        scanf("%d %d %d", &r, &c, &x);
        board[r][c] = x;
    }

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
                if((i+j)%2 == 0){
                    black[i][j] = black[i][j] + board[i][j];
                }else{
                    white[i][j] = white[i][j] + board[i][j];
                }
                white[i][j] = white[i-1][j] + white[i][j-1] - white[i-1][j-1] + white[i][j];
                black[i][j] = black[i-1][j] + black[i][j-1] - black[i-1][j-1] + black[i][j];
        }
    }
    /*for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << white[i][j];
        }
        cout << endl;
    }*/
    while(true){
        scanf("%d %d %d %d", &c1, &r1, &c2, &r2);
        if(c1 == 0 && c2 == 0 && r1 == 0 && r2 == 0){
            break;
        }
        int blacksum = black[r2][c2] - black[r2][c1-1] - black[r1-1][c2] + black[r1-1][c1-1];
        int whitesum = white[r2][c2] - white[r2][c1-1] - white[r1-1][c2] + white[r1-1][c1-1];

        //cout << "bs" << blacksum << endl;
        //cout << "ws" << whitesum << endl;
        if((c2 + r2) % 2 != 0)
            printf("%d", whitesum - blacksum);
        else
            printf("%d", blacksum - whitesum);


    }





    return 0;
}
