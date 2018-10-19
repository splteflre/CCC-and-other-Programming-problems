#include <iostream>
#include <string>

using namespace std;

string a, b, output, b1, a1;
int n, cnt, n1;
void fifth(string word, int n, char letter);

int main()
{
    cin >> a1 >> n1 >> b1;


    cin >> a >> b;
    string output2 = a;
    int ln = b.size();
    int s = a.find(b);

    while(output2.find(b)+1){
        int s = output2.find(b);
        if(s != -1)
            output2.erase(s,ln);
    }


    cin >> a >> b;
    int pos = a.find(b);
    string output3 = "";
    for(int i = 0; i < pos; i++){
        output3 += a[i];
    }

    cin >> a >> b;
    string output4 = a;
    int pos2 = 0;
    int cnt = 0;
    while(a.find(b, pos2)+1){
        pos2 = a.find(b, pos2) + 1;
        output4.insert(pos2-1 + cnt, " ");
        cnt++;
    }

    cin >> a >> n >> b;
    output = a;
    for(int i = 0, j = 0, num = a1.size(); i < num; i++, j++){
        if(j == n1){
            j = 0;
            cout << b1;
        }
        cout << a1[i];
    }
    cout << endl;
    cout << output2 << endl;
    cout << output3 << endl;
    cout << output4 << endl;
    string output5 = a;
    int pos3 = 0;
    int positions[100000];
    int c = 0;
    int num = a.size();
    while(a.find(b, pos3)+1){
        pos3=a.find(b,pos3) + 1;
        positions[c] = pos3 - 1;
        c++;
    }
    c = 0;
    for(int i = 0, j=0; i < num; i++,j++){
        if(j==n){
            j=0;
            cout << " ";
        }else if(i == positions[c]){
            j=0;
            cout << " ";
            c++;
        }
        cout << output5[i];

    }

    //fifth(a, n, temp);

    return 0;
}
/*
void fifth(string word, int n, char letter)
{
	for(int i=0,j=0; i<word.length(); i++,j++) {
		if(j==n) {
			j = 0;
			cout << " ";
		} else if(word[i]==letter){
		    j = 0;
            cout << " ";
		}
		cout << word[i];
	}
}
*/
/*
MISSISSIPPI 2 *
MISSISSIPPI IS
MISSISSIPPI P
MISSISSIPPI I
MISSISSIPPI 2 I
*/

