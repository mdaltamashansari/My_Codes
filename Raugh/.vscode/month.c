#include <stdio.h>
int main()
{
    int k;
    for (int i = 0; i < 7; i++)
    {
        if (i != 0)
            printf("%d", i);
        else{
            printf("  ");
        }

        printf(" ");

        k = i + 7;
        for (int j = 1; j < 5; j++)
        {
            if (k <= 31)
            {
                printf("%d", k);
            }
            printf(" ");
            k = k + 7;
        }
        printf(" \n ");
    }
}
