#include <stdio.h>

int factorialInRecursion(int x);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("%d", factorialInRecursion(a));

}

int factorialInRecursion(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }
    else{
        return x * factorialInRecursion(x-1);
    }

}