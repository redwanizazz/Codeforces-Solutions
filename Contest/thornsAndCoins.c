#include <stdio.h>

int main()
{

    int i, t, n, coins = 0;

    scanf("%d\n", &t);

    for (int j = 0; j < t; j++)
    {
        scanf("%d\n", &n);

        char path[n + 1];

        for (i = 0; i < n; i++)
        {
            scanf("%c", &path[i]);
        }

        for (i = 1; i < n; i++)
        {

            if (path[i] == '*' && path[i + 1] == '*' && i < n - 1)
            {
                break;
            }

            else if (path[i] == '@')
            {
                coins++;
            }
        }

        printf("%d\n", coins);

        coins = 0;
    }
    return 0;
}