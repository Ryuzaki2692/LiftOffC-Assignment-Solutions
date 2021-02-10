#include <stdio.h>

int main()
{
    char s[50];
    printf("Enter a sentence: ");
    gets(s);
    int i = 0,w = 0;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            w++;
        }
        i++;
    }
    printf("The number of words in the sentence is: %d", w+1);
    return 0;
}