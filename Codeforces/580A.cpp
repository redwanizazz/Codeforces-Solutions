#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, s = 1, max = 1;
    cin >> n;

    int arrayOfMoney[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arrayOfMoney[i];
    }

    for (int i = 1; i < n; i++)
    {

        if (arrayOfMoney[i] >= arrayOfMoney[i - 1])
        {
            s++;

            if (s > max)
            {
                max = s;
            }
        }

        else
        {
            s = 1;
        }
    }

    cout << max << endl;

    return 0;
}