#include <stdio.h>

int min(int x, int y)
{
    if (x < y)
    {
        return x;
    }

    else if (y < x)
    {
        return y;
    }

    else
    {
        return x;
    }
}

int main()
{

    int i, j, k, t, n;
    int score = 0;

    scanf("%d\n", &t);

    scanf("%d\n", &n);

    int arr[2 * n];

    for (i = 0; i < t; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            scanf("%d ", &arr[j]);
        }
        for (k = 0; k < 2 * n; k + 2)
        {
            score += min(arr[k], arr[k + 1]);
        }
        printf("%d\n", score);
    }

    return 0;
}