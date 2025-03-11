#include <stdio.h>

// Function to find the length of the LCS
int longest_common_subsequence(int A[], int B[], int m, int n) {
    int dp[n + 1];
    int i, j;

    for (i = 0; i <= m; i++) {
        int prev = 0;
        for (j = 0; j <= n; j++) {
            int temp = dp[j];
            if (i == 0 || j == 0)
                dp[j] = 0;
            else if (A[i - 1] == B[j - 1])
                dp[j] = prev + 1;
            else
                dp[j] = max(dp[j], dp[j - 1]);
            prev = temp;
        }
    }
    return dp[n];
}

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int minimum_subarray_to_remove(int A[], int B[], int n) {
    int lcs_length = longest_common_subsequence(A, B, n, n);
    return n - lcs_length;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int caseNo = 1; caseNo <= t; caseNo++) {
        int n;
        scanf("%d", &n);

        int A[n], B[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &A[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &B[i]);

        int min_subarray_length = minimum_subarray_to_remove(A, B, n);
        printf("Case %d: %d\n", caseNo, min_subarray_length);
    }

    return 0;
}
