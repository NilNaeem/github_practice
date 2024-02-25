#include<stdio.h>
int main()
{
    int n_23,num1_23,num2_23,num3_23,minDigit_23; //2202023
    printf("Enter 3-Digit Number: "); //2202023
    scanf("%d",&n_23); //2202023
    while(n_23<100 || n_23>999) //2202023
    {
    printf("Invalid Number!! Enter 3-Digit Number: "); //2202023
    scanf("%d",&n_23); //2202023
    }
    num1_23=n_23%10; //2202023
    n_23=n_23/10; //2202023
    num2_23=n_23%10; //2202023
    n_23=n_23/10; //2202023
    num3_23=n_23%10; //2202023

    minDigit_23=(num1_23<num2_23)? //2202023
    ((num1_23<num3_23)?num1_23:num3_23):((num2_23<num3_23)?num2_23:num3_23); //2202023
    printf("The minimum digit is= %d",minDigit_23); //2202023
}
