#include <stdio.h>
#include <conio.h>
#include <dos.h>
//SELECTION SORT
int main()
{
	/*Variables: i is to count the unsorted elements in the array
				j is to track to sorted elements in the array
				min is to store the smallest value in the array
				y is tracking the swaping of elements in the aarray
	*/
    int i, j, min, temp, y;
    int arr[]= {8,1,3,5,7};
    
   	//printf("Enter number:\n");
   	
   /*for (i=0; i<5; i++)
    {
    	scanf("%d", &arr[i]);
	}
*/
	printf("Unsorted Array:\n");
	
    for (i=0; i<5; i++)
{
	printf("%d\n",arr[i]);
	if (i<4)
	{
		printf("---> ");
	}
}

for (i=0; i<5; i++)
{
     min=i;
     j=i;
     
    for (j=i; j<5; j++)
    {
    	if (arr[min] > arr[j])
    	{
			min = j;
		}
	}
		if (min != i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
			printf("\nLoop number %d completed: ",i+1);
			for(y=0; y<5; y++)
			{
				printf("%d", arr[y]);
			}
			system("pause");
		}
		
}
	printf("\nSorted Array:\n");
	for (i=0; i<5; i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
	 printf("\n\n");
	 system("pause");
	 
	 return 0;
}

