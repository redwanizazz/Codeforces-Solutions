#include <stdio.h>

int main()
{

    int i, t, aCount, bCount;
    char five[5];

    scanf("%d", &t);

    while (t != 0)
    {

        aCount = bCount = 0;

        for (i = 0; i < 5; i++)
        {
            scanf(" %c", &five[i]);
        }

        for(i = 0; i < 5; i++){
            if(five[i] == 'A'){
                aCount++;
            }
            else if(five[i] == 'B'){
                bCount++;
            }
        }

        if(aCount>bCount){
            printf("A\n");
        }
        else if(aCount<bCount){
            printf("B\n");
        }

        t--;
    }

    return 0;
}