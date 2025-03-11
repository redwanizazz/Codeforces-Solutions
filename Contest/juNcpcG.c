#include <stdio.h>

int main()
{

    int t, n, indexI, indexJ, caseNo = 1;
    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%d", &n);

        int a[n];
        int b[n];
        indexI = 0;
        indexJ = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[i] == b[j])
                    {
                        indexI = i;
                        indexJ = j;
                    }
                }
            }
        }

        printf("Case %d: %d\n", caseNo, indexI-indexJ);
        caseNo++;
        t--;
    }

    return 0;
}