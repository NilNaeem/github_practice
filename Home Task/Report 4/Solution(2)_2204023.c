#include<stdio.h>
int main()
{
    int n_23,r_23,i_23; //2204023
    printf("How many time You want to repeat process? : "); //2204023
    scanf("%d",&r_23); //2204023
    for(i_23=1; i_23<=r_23; i_23++) //2204023
    {
        printf("\nEnter an integer [20-99]: "); //2204023
        scanf("%d",&n_23); //2204023

        while(n_23>99||n_23<20) //2204023
        {
            printf("Invalid Number!! Enter an integer [20-99]: "); //2204023
            scanf("%d",&n_23); //2204023
        }
        printf("In words: "); //2204023
        switch(n_23/10) //2204023
        {
            case 2:
                printf("Twenty ");break; //2204023
            case 3:
                printf("Thirty ");break; //2204023
            case 4:
                printf("Forty ");break; //2204023
            case 5:
                printf("Fifty ");break; //2204023
            case 6:
                printf("Sixty ");break; //2204023
            case 7:
                printf("Seventy ");break; //2204023
            case 8:
                printf("Eighty ");break; //2204023
            case 9:
                printf("Ninety ");break; //2204023
        }

        switch(n_23%10) //2204023
        {
            case 0:
                printf(" ");break; //2204023
            case 1:
                printf("One \n");break; //2204023
            case 2:
                printf("Two \n");break; //2204023
            case 3:
                printf("Three \n");break; //2204023
            case 4:
                printf("Four \n");break; //2204023
            case 5:
                printf("Five \n");break; //2204023
            case 6:
                printf("Six \n");break; //2204023
            case 7:
                printf("Seven \n");break; //2204023
            case 8:
                printf("Eight \n");break; //2204023
            case 9:
                printf("Nine \n");break; //2204023
        }
    }
    getch();
    return 0;
}








