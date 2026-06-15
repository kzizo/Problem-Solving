#include <iostream>
using namespace std;

int main(){
    long long V, A, B, C;
    cin >> V >> A >> B >> C;

    while(V >= 0){
        if(V >= A){
            V -= A;
        }else{
            cout << "F\n";
            break;
        }
        

        if(V >= B){
            V -= B;
        }else{
            cout << "M\n";
            break;
        }

        if(V >= C){
            V -= C;
        }else{
            cout << "T\n";
            break;
        }
    }
}