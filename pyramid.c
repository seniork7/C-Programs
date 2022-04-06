#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;

   do
    {
       printf("How tall should the wall be\n ");
        scanf("%d", &n);
    }
    while (n>20 || n<1);

    system("cls");

    printf("\n\n");

    for(i = 1; i<n; i++) //
    {
        printf("\t\t\t\t\t");
        for(int k = 1; k<n-i; k++)
        {
            printf(" ");
        }
        for(int j = 0; j<2*i-1; j++)
        {
            printf("#");
        }

        printf("\n");
    }
    getch();
}
