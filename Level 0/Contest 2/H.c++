#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();

        int arr[n];

        for (int i = 0; i < n; i++) {
            arr[i] = s[i] - '0';
        }

        for (int i = 1; i < n; i++) {
            int j = i;

            while (j > 0 && arr[j] > 0 && arr[j] - 1 > arr[j - 1]) {

                arr[j]--;

                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;

                j--;
            }
        }

        string result = "";

        for (int i = 0; i < n; i++) {
            result += arr[i] + '0';
        }

        cout << result << '\n';
    }
}