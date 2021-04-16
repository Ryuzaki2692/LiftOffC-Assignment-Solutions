#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);
    int arr[m][n];

    int ar[m][n];

    for(int i = 0; i<m;i++)
    {
        printf("Enter the values of row %d for matrix A\n", i+1);
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i<m;i++)
    {
        printf("Enter the values of row %d for matrix B\n", i+1);
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    //int *ptr = &arr[2][5];
    //int *pt = &ar[2][5];
    printf("The resultant matrix of A+B will be=\n");

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)
        {
            int *ptr = &arr[i][j];
            int *pt = &ar[i][j];
             printf("%d ", (*ptr)+(*pt));
        ptr++;
        pt++;
        }
        printf("\n");

    }
    return 0;
}