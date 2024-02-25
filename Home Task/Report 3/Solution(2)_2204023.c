/*2. Write a program to print all the prime numbers between two given
integers using ‘for’ and ‘while’ as outer and inner loop respectively */

#include<stdio.h>
int main()
{
    int a_23,b_23,check_23; //2204023
    printf("Enter two integer:"); //2204023
    scanf("%d %d",&a_23,&b_23); //2204023
    if(a_23==1)a_23=2;
    for(int i_23=a_23; i_23<=b_23; i_23++) //2204023
        {
        check_23=1;
        for(int j_23=2; j_23*j_23<=i_23; j_23++) //2204023
        {
            if(i_23%j_23==0) //2204023
            check_23=0; //2204023
        }
        if(check_23) //2204023
        printf("%d ",i_23); //2204023
        }
}
