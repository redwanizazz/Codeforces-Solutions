#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if (n == m)
        {
            cout << l << " " << r;
            return 0;
        }

        if (n == 0)
        {
            r = m;
            cout << l << " " << r;
            return 0;
        }

        else if (m == 0)
        {
            l = -m;
            cout << l << " " << r;
            return 0;
        }

        for (int i = 1; i <= (n - m); i++)
        {

            if (i % 2 == 0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return 0;
}