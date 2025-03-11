#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t != 0)
    {
        int x, flag = 0;
        cin >> x;

        int y, z;

        for (y = 1; y < x; y++)
        {
            z = x ^ y;

            if (z > 0 && (x + y > z) && (x + z > y) && (y + z > x))
            {
                cout << y << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "-1" << endl;
        }
        t--;
    }

    return 0;
}