#include <iostream>
#include <stdio.h>

using namespace std;

int colony[1001][1001], n, visited[1001][1001];

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &colony[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(colony[i][j] == '.' || colony[i][j] == '0'){

            }

        }
    }


    return 0;
}
