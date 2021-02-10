#include <stdio.h>

int main()
{
    long a,b;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a > 0)
    {
        b = a%10;
        sum = sum + b;
        a = a/10;
    }
 
    printf("%d\n", sum);
    return 0;
}