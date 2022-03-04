#include <stdio.h>

void swap (int *var1, int *var2);//Function prototype/declaration

int main()
{
    //Local variable declaration
    int var1;
    int var2;

	printf("\n\n\n\n\n\n\t\t\t\t\tEnter numbers to be swapped:\n\t\t\t\t\t");//Prompting the user to enter numbers to be swapped
	scanf("%d", &var1);//Accepting user input for first number
	printf("\t\t\t\t\t");
	scanf("%d", &var2);//Accepting user input for second number
	system("cls");

    printf("\n\n\n\n\n\t\t\t\t\tBefore swapping, the numbers were: (%d, %d)\n", var1, var2);//Displaying numbers entered before swap

           /*Calling of funtion to swap the values.
           &var1 indicates pointer to var1 ie. address of variable var1 and
           &var2 indicates pointer to var2 ie. address of variable var2.
           */
    swap(&var1, &var2);/*Calling swap function
                        Passing the function to 2 parameters
                      */

    printf("\n\t\t\t\t\tAfter swapping, the numbers are: (%d, %d)\n", var1, var2);
    system ("pause");
return 0;
}

//Swap function definition
void swap(int *var1, int *var2)
{
    int temp;
     temp = *var1;//Placing the value at var1 address into temp
     *var1 = *var2;//Placing the value at var2 address into var1
     *var2 = temp;//Placing the value at temp address into var2
}
