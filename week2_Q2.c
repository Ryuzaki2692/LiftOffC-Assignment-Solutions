#include <stdio.h>

int main()
{
    int n,sum1=0,sum2=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ar[n];// = {15,12,13,6,2,8};
    
    for(int i = 0; i<n; i++)
    {
        printf("Enter any integer: ");
        scanf("%d", &ar[i]);
    }
    for(int i = 1; i<n; i = i + 2)
    {
        sum1 = sum1 + ar[i];
    }
    printf("SUm of the even position elements in the given array is %d\n", sum1);

    for(int i = 0; i<n; i++)
    {
        if(ar[i]%2 == 0){
            sum2 = sum2 + ar[i];
        }
    }
    printf("Sum of the even elements of the given array is %d\n",sum2);
    return 0;
}