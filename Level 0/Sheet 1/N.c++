#include <iostream>
using namespace std;

int main(){
    int n ,P, V, T;
    cin >> n;

    int submitted_problems = 0;

    for(int i = 0; i < n; ++i){
        cin >> P >> V >> T;

        if((P == 1 && V == 1) || (P == 1 && T == 1) || (T == 1 && V == 1) || (P == 1 && V == 1 && T == 1)){
            submitted_problems++;
        }
    }

    cout << submitted_problems << "\n";
}