#include <stdio.h>

int palindrome(int x, int y);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == palindrome(num,0))
    {
        printf("%d is a palindrome\n", num);
    }else{
        printf("%d is not a palindrome\n", num);
    }
    return 0;

}

int palindrome(int x, int y)
{
    if(x == 0)
    {
        return y;
    }
    else{
        y = (y * 10) + x % 10;
        return palindrome(x / 10, y);
    }

}