#include <iostream>
using namespace std;

int main()
{

    int t, l, r, d, u;
    cin >> t;

    while (t != 0)
    {
        cin >> l >> r >> d >> u;
        
        if (l == r && r == d && d == u)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }
    return 0;
}