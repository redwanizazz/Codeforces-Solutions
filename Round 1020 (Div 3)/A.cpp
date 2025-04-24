#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int oneCnt = 0;
        int zeroCnt = 0;
        int totalCnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                oneCnt++;
            }
        }

        if (oneCnt == 0)
        {
            cout << n << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                totalCnt = totalCnt + oneCnt - 1;
            }
            else
            {
                totalCnt = totalCnt + oneCnt + 1;
            }
        }

        cout << totalCnt << endl;
    }

    return 0;
}