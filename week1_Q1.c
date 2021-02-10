#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter first integer x: ");
    scanf("%d", &x);
    printf("Enter second integer y: ");
    scanf("%d", &y);

    printf("Sum of the integers %d and %d is %d\n",x ,y , x+y);
    printf("Product of the integers %d and %d is %d\n",x ,y, x*y);
    printf("Difference of the integers %d and %d is %d\n", x, y , x-y);
    printf("Quotient of the integers %.2f and %.2f is %.2f\n",(float)x ,(float)y, (float)x/y);
    printf("The modulo of the integers %d and %d is %d\n",x ,y , x%y);
    return 0;
}