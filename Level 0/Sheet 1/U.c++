#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string goal_1 = "codeforces";
    string goal_2 = "CODEFORCES";

    char inp;

    for(int i = 0; i < t; ++i){
        cin >> inp;
        int temp = 0;
        for(int j = 0; j < goal_1.length(); ++j){
            if(inp == goal_1[j] || inp == goal_2[j]){
                temp++;
                break;
            }
        }
        if(temp != 0) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}