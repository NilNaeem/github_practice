#include<stdio.h>
void fact(int a_23)
{
    int f_23=1; //2204023
    while(a_23) //2204023
    {
        f_23=f_23*a_23; //2204023
        a_23--; //2204023
    }
    printf("Factorial Value Is: %d",f_23); //2204023
}


int main()
{
    int n_23; //2204023
    printf("Enter the value of N factorial: "); //2204023
    scanf("%d",&n_23); //2204023
    fact(n_23); //2204023
    getch();
}
