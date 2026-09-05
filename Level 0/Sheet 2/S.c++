#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            for (int i = 2; i < n; i++)
            {
                if(arr[0] == arr[1]){
                    if(arr[i] != arr[0]){
                        cout << i + 1 << endl;
                        break;
                    }
                }else{
                    if(arr[0] != arr[i]){
                        cout << 1 << endl;
                        break;
                    }else {
                        cout << 2 << endl;
                        break;
                    }
                }
            }
        t--;
    }
}
