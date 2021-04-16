#include <stdio.h>
#include <string.h>

struct info
{
    char name[50];
    int roll;
};

int main()
{
    struct info student[5];

    for(int i = 0; i<5; i++)
    {
        printf("Enter name: ");    
        gets(student[i].name);
        printf("Enter roll no.: ");
        scanf("%d", &student[i].roll);
        getchar();
    }

    printf("The information of the 5 students are as follows:\n\n");
    for(int i = 0; i<5;i++)
    {
        printf("Name: %s\nRoll no.: %d\n\n",student[i].name,student[i].roll);
    }
return 0;
}