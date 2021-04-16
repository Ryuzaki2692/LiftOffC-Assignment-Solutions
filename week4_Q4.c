#include <stdio.h>

union book
{
    char name[20];
    char author[30];
};

int main()
{
    union book favBook;
    printf("Enter the name of the book: ");
    gets(favBook.name);
    printf("My Favorite book is %s \n", favBook.name);
    printf("Enter its author: ");
    gets(favBook.author);
    printf("It is written by %s\n", favBook.author);

    
return 0;
}