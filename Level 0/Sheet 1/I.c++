#include <iostream>
using namespace std;

int main(){
    int M, N;
    cin >> M >> N;

    int area = M * N;

    if(area % 2 == 0){
        cout << area / 2 << endl;
    }else{
        area--;
        cout << area / 2 << endl;
    }
}