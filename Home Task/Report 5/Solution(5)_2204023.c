#include<stdio.h>
void binary(int n_23) //2204023
{
    if(n_23==1) //2204023
    {
        printf("1"); //2204023
        return;
    }
    else
    {
        binary(n_23/2); //2204023
        printf("%d",(n_23%2)); //2204023
    }
}
int main()
{
    int n_23;
    printf("Enter a decimal number: "); //2204023
    scanf("%d",&n_23); //2204023
    printf("\nBinary equivalent of %d is: ",n_23); //2204023
    binary(n_23); //2204023
    getch();
}
