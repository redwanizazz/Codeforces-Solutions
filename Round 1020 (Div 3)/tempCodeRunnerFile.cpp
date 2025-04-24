#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        int n; // length of the binary string
        cin >> n;
        string s;
        cin >> s;

        // Step 1: Count the number of 1's in the original string
        int ones_count = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                ones_count++;
            }
        }

        // Step 2: Total count of '1's after flipping
        int total_ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                total_ones += ones_count - 1; // Flip '1' to '0'
            }
            else
            {
                total_ones += ones_count + 1; // Flip '0' to '1'
            }
        }

        // Step 3: Output the result for each test case
        cout << total_ones << endl;
    }

    return 0;
}
