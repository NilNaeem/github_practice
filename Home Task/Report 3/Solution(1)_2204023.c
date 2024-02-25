/*1.Write a program to print the following series up to n terms where n is
a user input.
(1) + (1+2) +(1+2+3) + (1+2+3+4) + (1+2+3+4+5) + ……….. */

#include<stdio.h>
int main()
{
    int i_23,j_23,n_23; //2204023
    printf("Enter the value of N: "); //2204023
    scanf("%d",&n_23); //2204023

    for(i_23=1 ;i_23<=n_23; i_23++) //2204023
    {
        printf("("); //2204023

        for(j_23=1; j_23<=i_23; j_23++) //2204023
        {
            if (i_23==j_23) //2204023
            {
                printf("%d)",j_23); //2204023
            }
            else
                printf("%d+",j_23); //2204023
        }
        if(i_23!=n_23) //2204023
            printf("+"); //2204023
    }
    return 0;
}
