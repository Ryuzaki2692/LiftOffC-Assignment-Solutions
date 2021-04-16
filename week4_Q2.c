#include <stdio.h>
#include <string.h>


int main()
{
    char word[50];
    printf("Enter a string: ");
    gets(word);
    int len = strlen(word);
    char *ptr = word + len - 1;
    
    printf("Reverse of the given string is ");
    for(int i = 0; i<len; i++)
    {
        printf("%c", *ptr);
        ptr--;
    }
return 0;
}