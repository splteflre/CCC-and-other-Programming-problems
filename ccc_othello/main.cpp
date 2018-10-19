#include <iostream>

using namespace std;

int input, cnt1, cnt2, x, y, a[9][9], b[9][9], c[9][9], dx[8] = {0, 0, 1, -1, 1, -1, -1, 1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};
char board;
bool p1 = true;

void othello_a(int x, int y, char board, bool p1);
void othello_b(int x, int y, char board, bool p1);

int main()
{
    a[4][4] = 1;
    a[5][5] = 1;
    a[4][5] = 2;
    a[5][4] = 2;
    for(int i = 1, j = 8; i < 9 && j >0; i++, j--){
        b[i][i] = 1;
        b[i][j] = 2;
    }
    for(int i = 1; i < 9; i++){
        for(int j = 3; j < 5; j++){
            c[i][j] = 1;
            c[i][j+2] = 2;
        }

    }

    cin >> board >> input;
    if(board == 'a'){
        cnt1 = 2; cnt2 = 2;
    }else if (board == 'b'){
        cnt1 = 8; cnt2 = 8;
    }
    for(int i = 1; i <= input; i++){
        cin >> y >> x;
        if(board == 'a'){
            if(i%2 == 0){
                p1 = false;
            }
            othello_a(x, y, board, p1);
        }else if(board == 'b'){
            if(i%2 == 0){
                p1 = false;
            }
            othello_b(x, y, board, p1);
        }

    }
    cout << cnt1 << " " << cnt2 << endl;


    return 0;
}

void othello_a(int x, int y, char board, bool p1){

    cout << "was here a" << endl;
    if(p1){
        a[y][x] = 1;
        cnt1++;
    }else{
        a[y][x] = 2;
        cnt2++;
    }
    bool done = false;
    int sx = x, sy = y, keep = 0;;
    for(int i = 1; i < 9; i++){
        for(int j = 0; j < 8; j++){
            keep++;
            if(p1){
                if(a[y + (dy[j]*i)][x + (dx[j]*i)] = 1){

                }
            }
        }
    }
    /*
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
            //cout << "was in while " << endl;
        sx--;
        if(p1){
            //cout << "a[sy][sx] " << a[sy][sx] << endl;
            if(a[sy][sx] == 1 || a[sy][sx] == 0){
               a[sy][sx] = 2;
               cnt2--;
               cnt1++;
            }else{
               // cout << "was in done" << endl;
                done = true;
            }
        }else{
            if(a[sy][sx] == 2 || a[sy][sx] == 0){
               a[sy][sx] = 1;
               cnt1--;
               cnt2++;
            }else{
                done = true;
            }
        }
    }
    while(not done && sx < 9 && sx > 0 && sy < 9 && sy > 0){
        if()
    }
    sx = x, sy = y;
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
        sx++;
        if(p1){
            if(a[sy][sx] == 1 || a[sy][sx] == 0){
               a[sy][sx] = 2;
               cnt2--;
               cnt1++;
            }else{
                done = true;
            }
        }else{
            if(a[sy][sx] == 2 || a[sy][sx] == 0){
               a[sy][sx] = 1;
               cnt2++;
               cnt1--;
            }else{
                done = true;
            }
        }
    }
    sx = x, sy = y;
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
        sy--;
        if(p1){
            if(a[sy][sx] == 1 || a[sy][sx] == 0){
               a[sy][sx] = 2;
               cnt1++;
               cnt2--;
            }else{
                done = true;
            }
        }else{
            if(a[sy][sx] == 2 || a[sy][sx] == 0){
               a[sy][sx] = 1;
               cnt2++;
               cnt1--;
            }else{
                done = true;
            }
        }
    }
    sx = x, sy = y;
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
        sy++;
        if(p1){
            if(a[sy][sx] == 1 || a[sy][sx] == 0){
               a[sy][sx] = 2;
               cnt1++;
               cnt2--;
            }else{
                done = true;
            }
        }else{
            if(a[sy][sx] == 2 || a[sy][sx] == 0){
               a[sy][sx] = 1;
               cnt2++;
               cnt1--;
            }else{
                done = true;
            }
        }
    }
    */
}


void othello_b(int x, int y, char board, bool p1){
    cout << "was here b" << endl;
    if(p1){
        b[y][x] = 1;
        cnt1++;
    }else{
        b[y][x] = 2;
        cnt2++;
    }
    bool done = false;
    int sx = x, sy = y;
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
            //cout << "was in while " << endl;
        sx--;
        if(p1){
            //cout << "a[sy][sx] " << a[sy][sx] << endl;
            if(b[sy][sx] == 1 || b[sy][sx] == 0){
               b[sy][sx] = 2;
               cnt2--;
               cnt1++;
            }else{
                //cout << "was in done" << endl;
                done = true;
            }
        }else{
            if(b[sy][sx] == 2 || b[sy][sx] == 0){
               b[sy][sx] = 1;
               cnt1--;
               cnt2++;
            }else{
                done = true;
            }
        }
    }
    sx = x, sy = y;
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
        sx++;
        if(p1){
            if(b[sy][sx] == 1 || b[sy][sx] == 0){
               b[sy][sx] = 2;
               cnt2--;
               cnt1++;
            }else{
                done = true;
            }
        }else{
            if(b[sy][sx] == 2 || b[sy][sx] == 0){
               b[sy][sx] = 1;
               cnt2++;
               cnt1--;
            }else{
                done = true;
            }
        }
    }
    sx = x, sy = y;
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
        sy--;
        if(p1){
            if(b[sy][sx] == 1 || b[sy][sx] == 0){
               b[sy][sx] = 2;
               cnt1++;
               cnt2--;
            }else{
                done = true;
            }
        }else{
            if(b[sy][sx] == 2 || b[sy][sx] == 0){
               b[sy][sx] = 1;
               cnt2++;
               cnt1--;
            }else{
                done = true;
            }
        }
    }
    sx = x, sy = y;
    while(not done && sx  < 9 && sx > 0 && sy  < 9 && sy > 0){
        sy++;
        if(p1){
            if(b[sy][sx] == 1 || b[sy][sx] == 0){
               b[sy][sx] = 2;
               cnt1++;
               cnt2--;
            }else{
                done = true;
            }
        }else{
            if(b[sy][sx] == 2 || b[sy][sx] == 0){
               b[sy][sx] = 1;
               cnt2++;
               cnt1--;
            }else{
                done = true;
            }
        }
    }
}

