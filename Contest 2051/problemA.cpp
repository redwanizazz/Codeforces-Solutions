#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;

    cin >> t;

    while (t--) {

        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int maxDifference = -1000;

        for(int i = 0; i < n; i++)

        cout << maxDifference << endl;
    }

    return 0;
}