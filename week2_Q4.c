#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int ar[n];
    
    for(int i = 0; i<n;i++)
    {
        printf("Enter the values: ");
        scanf("%d", &ar[i]);
    }
   
    for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++)
            {
                if (ar[i] > ar[j]) 
                {
                    int temp =  ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }
    printf("%d %d", ar[0], ar[n-1]);
    return 0;
}