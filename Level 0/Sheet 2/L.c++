#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'G')
            {
                s1[i] = 'B';
            }

            if (s2[i] == 'G')
            {
                s2[i] = 'B';
            }
        }

        bool isSimilar = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                isSimilar = false;
                break;
            }
        }
        if(isSimilar) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}