#include<stdio.h>
int main()
{
    char grade_23; //2204023
    printf("Enter the grade (A/B/C/D/F): "); //2204023
    scanf("%c",&grade_23); //2204023
    switch(grade)
    {
        case 'A':
            printf("Percentage: 80-100%%"); //2204023
            break;
        case 'B':
            printf("Percentage: 70-79%%"); //2204023
            break;
        case 'C':
            printf("Percentage: 60-69%%"); //2204023
            break;
        case 'D':
            printf("Percentage: 50-59%%"); //2204023
            break;
        case 'F':
            printf("Percentage: 0-50%%"); //2204023
            break;
        default:
            printf("Invalid Grade Entered.\n"); //2204023
    }
}
