#include <stdio.h>

int main()
{
    int row;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for(int i = 1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j==i || j==(row+1-i))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}