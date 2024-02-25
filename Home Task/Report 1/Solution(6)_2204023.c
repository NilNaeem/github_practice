#include<stdio.h>
int main()
{
    int units_23; //2204023
    float bill_23=0.0; //2204023
    printf("Enter the number of units used this month: "); //2204023
    scanf("%d",&units_23); //2204023

    if(units_23<=50) //2204023
    {
        bill_2204023=units_23*4; //2204023
    }
    else if(units_23<=80) //2204023
    {
        bill_23=50*4+(units_23-50)*3; //2204023
    }
    else if(units_23<=100) //2204023
    {
        bill_23=50*4+30*3+(units_23-80)*2; //2204023
    }
    else
    {
        bill_23=50*4+30*3+20*2+(units_23-100)*1; //2204023
    }
    printf("Electricity Bill: BDT %.2f\n",bill_23); //2204023
    return 0; //2204023
}
