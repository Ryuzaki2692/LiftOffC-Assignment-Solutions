#include <stdio.h>

int squareOfNumber(int i);

int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);

    printf("Square of the input value is %d\n", squareOfNumber(x));
    return 0;
}

int squareOfNumber(int i)
{
    int temp;
    temp = i * i;
    return temp;

}