#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct animal
{
    char type[20][20];
	char name[30][20];
	char color[20][20]; 
	char sound [20][20];
    char num_legs[20][20];
};
int main()
{

int count;
int i=1;

struct animal pet;

for (count=0; count<3; count++)
{
	printf("Please Enter type of animal %d\n",i);
	scanf("%s", &pet.type[count]);
	
	printf("Please Enter color of animal %d\n",i);
	scanf("%s",&pet.color[count]);
	
	printf("Please Enter sound of animal %d\n",i);
	scanf("%s",&pet.sound[count]);
	
	printf("Please Enter number of legs %d\n",i);
	scanf("%s",&pet.num_legs[count]);
	
	printf("Please Enter name of animal %d\n",i);
	scanf("%s",&pet.name[count]);
	i++;
fflush(stdin);
system("cls");
}
system("cls");
  for (count=0; count<3; count++)
{

printf("\n\n%s\n\n"
       ".......\n"
       "%s\n\n"
       "......\n"
       "%s\n\n"
       "......\n"
       "%s\n\n"
       ".......\n"
       "%s\n\n"
       ".......\n"
,pet.color[count],pet.name[count],pet.sound[count],pet.type[count],pet.num_legs[count]);

}
return 0;
}
