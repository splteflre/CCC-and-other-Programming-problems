#include <iostream>
#include <string>

using namespace std;

string line, line2;

int main()
{
    for(int i = 0; i < 5; i++){
        getline(cin, line);
        for(int i = 0; i < line.length(); i++){
            if(line[i] >= 'A' && line[i] <= 'Z'){
                line[i] = line[i] - 'A' + 'a';
            }
            if(line[i] == ' ' || line[i] == '.' || line[i] == ',' || line[i] == '?' || line[i] == ';'){
                line.erase(i, 1);i--;
            }
        }

        if(line.find("britishcolumbia")!= -1){
            cout << "British Columbia" << endl;
        }else if(line.find("alberta")!= -1){
            cout << "Alberta" << endl;
        }else if(line.find("saskatchewan")!= -1){
            cout << "Saskatchewan" << endl;
        }else if(line.find("manitoba")!= -1){
            cout << "Manitoba" << endl;
        }else if(line.find("ontario")!= -1){
            cout << "Ontario" << endl;
        }else if(line.find("quebec")!= -1){
            cout << "Quebec" << endl;
        }else if(line.find("novascotia")!= -1){
            cout << "Nova Scotia" << endl;
        }else if(line.find("newfoundland")!= -1){
            cout << "Newfoundland" << endl;
        }else if(line.find("newbrunswick")!= -1){
            cout << "New  Brunswick" << endl;
        }else if(line.find("pei")!= -1){
            cout << "PEI" << endl;
        }else{
            cout << "NO PROVINCE FOUND" << endl;
        }
    }

    return 0;
}
