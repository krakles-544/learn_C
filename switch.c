#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent!");
        break;
    case 'B':
        printf("Very good!");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Below Average");
        break;
    case 'E':
        printf("Poor");
        break;
    case 'F':
        printf("Fail");
        break;
    default:
        printf("Enter a valid age!");
        break;
    }



    return 0;
}