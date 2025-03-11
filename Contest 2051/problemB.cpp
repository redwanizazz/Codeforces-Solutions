#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a, b, c;
    cin >> t;

    while (t--) {
        cin >> n >> a >> b >> c;

        int cycles = a + b + c; // 1+5+3 = 9
        int fullCycle = n / cycles; //12/9 = 1
        int rem = n % cycles;   //12%9 = 3

        int dayCount = fullCycle * 3; //3
        int total = 0; //0

        if (rem > 0) {
            dayCount++; //4
            total += a; //1
        }

        if (rem > total && rem > 0) {
            dayCount++; //5
            total += b; //6
        }

        if (rem > total && rem > 0) { //Won't enter
            dayCount++; 
            total += c;
        }

        cout << dayCount << endl; // 5
    }

    return 0;
}
