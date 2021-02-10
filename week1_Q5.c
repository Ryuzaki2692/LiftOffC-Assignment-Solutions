#include <stdio.h>

int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c", &a);
    
    switch (a) {
        case 'A':
        printf("Vowel");
        break;
        case 'a':
        printf("Vowel");
        break;
        case 'E':
        printf("Vowel");
        break;
        case 'e':
        printf("Vowel");
        break;
        case 'I':
        printf("Vowel");
        break;
        case 'i':
        printf("Vowel");
        break;
        case 'O':
        printf("Vowel");
        break;
        case 'o':
        printf("Vowel");
        break;
        case 'U':
        printf("Vowel");
        break;
        case 'u':
        printf("Vowel");
        break;

        default:
        printf("Consonant");
        
    }
    return 0;
}