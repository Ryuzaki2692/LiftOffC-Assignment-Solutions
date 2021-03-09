#include <stdio.h>

int factorialOfNumber(int a);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", factorialOfNumber(x));
    return 0;

}

int factorialOfNumber(int a)
{
    if(a == 1 || a == 0)
    {
        return 1;
    }
    else {
    int temp = 1;
    for(int i = 1; i<=a; i++)
    {
        temp = temp * i;
    }
    return temp;
    }
}