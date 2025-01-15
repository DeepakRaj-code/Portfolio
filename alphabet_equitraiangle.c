//program to find the equitriangle pattern

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n,a=65,b ;
    printf("Enter the number of rows for equitriangle pattern: ");
    scanf("%d", &n);
    n =n-2;
    for (int i = 1; i <= n; i++)
    {
        b=a;
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("%c ",(char)b);
            b++;
        }
        printf("\n");
    }
    return 0;
}





/*            A
            A B C
          A B C D E
        A B C D E F G
      A B C D E F G H I
    A B C D E F G H I J K
  A B C D E F G H I J K L M
A B C D E F G H I J K L M N O


*/