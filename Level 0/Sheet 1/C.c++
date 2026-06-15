#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double R;
    cin >> R;
    double area = 3.14159 * (R * R);
    cout << "A=" << fixed << setprecision(4) << area << "\n";
}