#include <stdio.h>
#include <string.h>
 
int main()
{
    char string[80], search[10];
    int c1 = 0, c2 = 0, flag;
 
    printf("Enter a string: ");
    gets(string);
    printf("Enter search substring: ");
    gets(search);
    
    c1 = strlen(string);
    c2 = strlen(search);
    
    for (int i = 0; i <= c1 - c2; i++)
    {
        for (int j = i; j < i + c2; j++)
        {
            flag = 1;
            if (string[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            break;
        }
    }
    if (flag == 1)
    {
        printf("SEARCH SUCCESS");
    }
    else
    {
        printf("SEARCH FAIL");
    }
    return 0;
}