#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

char plan[1000][1000];
int store[100];
int room, tiles, r, c, x, y, cnt, keep;
stack<int> mystackx;
stack<int> mystacky;


int main()
{
    cin >> tiles;
    cin >> r;
    cin >> c;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> plan[i][j];
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; i < c; j++){
            if(plan[i][j] = '.'){
                mystacky.push(i);
                mystackx.push(j);
                plan[i][j] = 'I';

                while(!mystacky.empty() && !mystacky.empty()){
                        //cout << "was here while" << endl;
                    cnt = cnt + 1;
                    y = mystacky.top();
                    x = mystackx.top();
                    //mystacky.pop();
                    //mystackx.pop();
                    if(plan[y][x+1] == '.'){
                        mystackx.push(x+1);
                        mystacky.push(y);
                        plan[y][x] = 'I';

                    }else if(plan[y+1][x] == '.'){
                        mystackx.push(x);
                        mystacky.push(y+1);
                        plan[y][x] = 'I';
                    }else if(plan[y][x-1] == '.'){
                        mystackx.push(x-1);
                        mystacky.push(y);
                        plan[y][x] = 'I';
                    }else if(plan[y-1][x] == '.'){
                        mystackx.push(x);
                        mystacky.push(y-1);
                        plan[y][x] = 'I';
                    }else{
                        plan[y][x] = 'I';
                        mystackx.pop();
                        mystacky.pop();
                    }
                }
                store[keep] = cnt;
                keep++;
                cnt = 0;
            }

        }
    }
    sort(store, store + keep);

    for(; room < keep; room++){
        if(tiles - store[room] > 0){
            tiles = tiles - store[room];

        }else{
            break;
        }

    }
    cout << room << " rooms, " << tiles << " square metre(s) left over" << endl;



    return 0;
}
