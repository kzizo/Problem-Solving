#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int minutes = 0;

    if(a + b > c && a + c > b && b + c > a){
        cout << minutes << endl;
    }else if(a > b && a > c){
        minutes = (a + 1) - (b + c);
        cout << minutes << endl;
    }else if(b > a && b > c){
        minutes = (b + 1) - (a + c);
        cout << minutes << endl;
    }else{
        minutes = (c + 1) - (a + b);
        cout << minutes << endl;
    }
}