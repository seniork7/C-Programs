#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct store
{
    char title[50], author[50];
    int year_of_publication, number_of_pages, isbn_code;
    float price;
};

int main()
{
    struct store book;

printf("\n\n\n\n\n\n\t\t\t\t\tEnter book title:\t");
    		gets(book.title);
    printf("\t\t\t\t\tEnter author:\t");
    		gets(book.author);
    printf("\t\t\t\t\tEnter Year of Publication:\t");
    		scanf("%d", &book.year_of_publication);
    		fflush(stdin);
    printf("\t\t\t\t\tEnter Number of Pages:\t");
    		scanf("%d", &book.number_of_pages);
    		fflush(stdin);
     printf("\t\t\t\t\tEnter ISBN Code:\t");
    		scanf("%d", &book.isbn_code);
    		fflush(stdin);
     printf("\t\t\t\t\tEnter Price:\t");
    		scanf("%f", &book.price);
           system("cls");

    printf("\n\n\n\n\n\n"
    		"\t\t\t***USER INPUT***\n\n"
           "\t\t\t\t\t__________________________________\n"
           "\t\t\t\t\t\tBook Details\n"
           "\t\t\t\t\t__________________________________\n\n"
           "\t\t\t\t\tTitle ---------- %s\n"
           "\t\t\t\t\tAuthor ---------- %s\n"
           "\t\t\t\t\tYear of Publication ---------- %d\n"
           "\t\t\t\t\tNumber of Pages ---------- %d\n"
           "\t\t\t\t\tISBN Code ---------- %d\n"
           "\t\t\t\t\tPrice ---------- $%.2f\n",
           book.title, book.author, book.year_of_publication, book.number_of_pages, book.isbn_code, book.price);

    strcpy(book.title, "Programming");
    strcpy(book.author, "Kevon Senior");
    book.year_of_publication=1994;
    book.number_of_pages=50;
    book.isbn_code=105487;
    book.price=5450;

    printf("\n\n"
    		"\t\t\t***INITIALIZED VALUES***\n\n"
           "\t\t\t\t\t__________________________________\n"
           "\t\t\t\t\t\tBook Details\n"
           "\t\t\t\t\t__________________________________\n\n"
           "\t\t\t\t\tTitle ---------- %s\n"
           "\t\t\t\t\tAuthor ---------- %s\n"
           "\t\t\t\t\tYear of Publication ---------- %d\n"
           "\t\t\t\t\tNumber of Pages ---------- %d\n"
           "\t\t\t\t\tISBN Code ---------- %d\n"
           "\t\t\t\t\tPrice ---------- $%.2f\n\n\n",
           book.title, book.author, book.year_of_publication, book.number_of_pages, book.isbn_code, book.price);
           system("pause");
return 0;
}