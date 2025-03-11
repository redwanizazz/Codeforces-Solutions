#include <stdio.h>
#include <stdlib.h>

int findMinimumStrength(int a[], int n, int l, int r) {
    int maxXOR = 0;
    for (int i = l - 1; i < r; ++i) {
        if (a[i] > maxXOR)
            maxXOR = a[i];
    }
    int msbPos = 31;
    while (!((maxXOR >> msbPos) & 1))
        msbPos--;
    int ans = (1 << (msbPos + 1)) - 1;
    return ans;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; ++t) {
        int N, Q;
        scanf("%d %d", &N, &Q);
        int a[N];
        for (int i = 0; i < N; ++i) {
            scanf("%d", &a[i]);
        }
        printf("Case %d:\n", t);
        for (int q = 0; q < Q; ++q) {
            int L, R;
            scanf("%d %d", &L, &R);
            int strength = findMinimumStrength(a, N, L, R);
            printf("%d\n", strength);
        }
    }

    return 0;
}
