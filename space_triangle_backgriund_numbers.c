//space triangle background

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n,a=0;
    printf("Enter the number n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = n; k > i; k--)
        {
            a++;
            printf("%d ",a);
        }
        if (i != 0)
        {
            for (int j = 0; j < 2*i-1; j++)
            {
                printf("  ");
                if ((2*i-1)/2>=j)
                {
                    a++;
                }
                else
                {
                    a--;
                } 
            }
        }
        for (int k = n; k > i; k--)
        {
            if (k == 1)
            {
                printf("  ");
            }
            else
            {
                a--;
                printf("%d ",a);
            }
        }
        a=0;
        printf("\n");
    }
    return 0;
}