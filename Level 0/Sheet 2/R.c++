#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = 0;
    while (k < n)
    {
        string st;
        cin >> st;

        if (st.length() > 10)
        {
            int counter = 0;
            for (int i = 1; i < (st.length() - 1); i++)
            {
                counter++;
            }

            cout << st[0] << counter << st[st.length() - 1] << endl;
        }
        else
        {
            cout << st << endl;
        }
        k++;
    }
}