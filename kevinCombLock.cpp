#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t; // Test Case Input

    while (t != 0)
    {
        cin >> x;
        int flag = 0;

        while (x > 0)
        {

            string stringNum = to_string(x);

            // Check for "33"
            int index = stringNum.find("33");

            if (index != string::npos)
            {
                while ((index = stringNum.find("33")) != string::npos)
                {
                    stringNum.erase(index, 2);
                }

                if (stringNum.empty())
                {
                    x = 0;
                }
                else
                {
                    x = stoi(stringNum);
                }
            }
            else
            {
                x -= 33;
            }

            if (x == 0)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}