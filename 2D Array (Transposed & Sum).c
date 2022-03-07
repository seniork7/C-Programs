#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sumRow, sumCol, sum = 0;

	printf("\n\t\t\t\t\t\tEnter array elements:\n");

   for (i=0; i<3; i++) //Looping to accept user inputs
    {
        for (j=0; j<3; j++)
	    {
	         printf("\t\t\t\t\t\t\t");
	        scanf("%d", &a[i][j]);
	        // printf("\t\t\t\t\t\t");
	    }
    }

system("cls");

    printf("\n\n\t\t\t\t\t\t*2D Array\n\n");
 	for (i=0; i<3; i++)//Looping to find sum and print array values
    {
        printf("\t\t\t\t\t\t");
        for (j=0; j<3; j++)
	    {
	        sum += a[i][j];
	        printf("%d ",a[i][j]);
	    }
	printf("\n");
    }

    printf("\n\n\t\t\t\t\t\t*Transposed 2D Array\n\n");
 	for (i=0; i<3; i++)
    {
        printf("\t\t\t\t\t\t");
        for (j=0; j<3; j++)
	    {
	        printf("%d ",a[j][i]);
	    }
    printf("\n");
    }

  printf("\n\n\t\t\t\t\t\t*Sum of rows and columns in array\n\n");
 	for (i=0; i<3; i++)//Looping to find sum of rows and columns
    {
        sumRow = sumCol = 0;
        printf("\t\t\t\t\t\t");
        for (j=0; j<3; j++)
	    {
	        sumRow = sumRow + a[i][j];
	        sumCol = sumCol + a[j][i];
	    }
    printf("Sum of row %d is %d\t Sum of column %d is %d", y, sumRow, y, sumCol);
	printf("\n");
    }

printf("\n\n\t\t\t\t\t\t*The sum of array values is: %d ", sum);//Printing the sum of the values in array
printf("\n");
system("pause");

}
