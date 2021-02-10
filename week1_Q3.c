#include <stdio.h>

int main()
{
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("The diameter of this circle is %f\n", 2*r);
    printf("The circumference of this circle is %.2f\n", 2*3.14*r);
    printf("The area of this circle is %.2f\n", 3.14*r*r);
    return 0;
}