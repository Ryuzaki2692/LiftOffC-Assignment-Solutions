#include <stdio.h>

int main()
{
    float physics,chemistry,biology,mathematics,computer;
    float total = 500;
    printf("Enter the marks obtained in physics: ");
    scanf("%f", &physics);
    printf("Enter the marks obtained in chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter the marks obtained in biology: ");
    scanf("%f", &biology);
    printf("Enter the marks obtained in mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter the marks obtained in computer: ");
    scanf("%f", &computer);

    float per = (physics+chemistry+biology+mathematics+computer)/total;
    if(per >= 0.9)
    {
        printf("Grade A");

    } else if(per >= 0.8)
    {
        printf("Grade B");

    } else if(per >= 0.7)
    {
        printf("Grade C");

    } else if(per >= 0.6)
    {
        printf("Grade D");

    } else if(per >= 0.4)
    {
        printf("Grade E");

    } else if(per < 0.4)
    {
        printf("Grade F");
    }
    return 0;
}