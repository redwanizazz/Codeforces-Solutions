#include <iostream>
using namespace std;

int main()
{

    int t, n;
    cin >> t;

    while (t != 0)
    {
        cin >> n;
        int sequence[n + 1];
        int sum = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> sequence[i];
            sum += sequence[i];
        }

        sum -= (n - 1);

        cout << sum << endl;

        t--;
    }

    return 0;
}