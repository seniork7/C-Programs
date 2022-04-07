#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char*argv[])
{
    int option, acc_num, pin, count=0, n = 1;
    char name[20];
    double prev_bal=1000000.00, new_bal, tran_amount;

printf("\nPlease enter pin:\n");
        scanf("%d", &pin);

    for(count=0; count<3; count++)
    {
        if (pin!=3333)
        {   printf("\n%i Ivalid pin, Try again", n);
            printf("\nPlease enter pin:\n");
            scanf("%d", &pin);
            n++;
        }
        if(count == 2)
        {
            printf("\nYour account has been frozen due to multiple invalid entries!\nContact Customer Support for assistance.",n);
        }
    }
    
    if (pin==3333)
    {
        printf("\tTransaction Type\n\n"
           "\t1---->Make Deposit\n"
           "\t2---->Make Withdrawal\n"
           "\t3---->Make exit\n"
            "\tPlease select option from menu\n");
            scanf("%d", &option);
    }

    switch(option)
    {
    case 1:
        printf("\nPlease enter name:\t");
        fflush(stdin);
        scanf("%[^\n]*c", &name);
        printf("\nPlease enter account number:\t");
        scanf("%d", &acc_num);
        fflush(stdin);
        printf("\nPlease enter amount for deposit:\t");
        scanf("%lf", &tran_amount);
        new_bal=prev_bal+tran_amount;
        printf("\n%s\naccount number: %i"
               "\nDeposit amount: $%.2lf"
               "\nCurrent Balance: $%.2lf",name, acc_num,tran_amount, new_bal);
        break;
    case 2:
        printf("\nPlease enter name:\t");
        fflush(stdin);
        scanf("%[^\n]*c", &name);
        fflush(stdin);
        printf("\nPlease enter account number:\t");
        scanf("%d", &acc_num);
        fflush(stdin);
        printf("\nPlease enter amount for withdrawal:\t");
        fflush(stdin);
        scanf("%lf", &tran_amount);
        new_bal=prev_bal-tran_amount;
        printf("\n%s\naccount number: %i"
               "\nWithdrawal amount: $%.2lf"
               "\nCurrent Balance: $%.2lf",name, acc_num, tran_amount, new_bal);
        break;
    case 4:
        (exit);
    }
}
