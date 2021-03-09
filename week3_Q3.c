#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);

    printf("The GCD of %d and %d is %d\n",x,y,gcd(x,y));
    printf("The LCM of %d and %d is %d\n",x,y,lcm(x,y));
    return 0;  
    
}

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    } 
    else if(b == 0)
    {
        return a;
    }
    else if(a == b)
    {
        return a;
    }
    else if(a>b)
    {
        return gcd(a-b, b);
    }
    else if(a<b)
    {
        return gcd(a, b-a);
    }
}
int lcm(int a, int b)
{
    return ((a/gcd(a,b))*b);  //found this formula from google..
}