#include<stdio.h>
void prime(int x_23)
{
    int a_23; //2204023
    printf("Prime factors of %d are: ",x_23); //2204023
    for(a_23=2;a_23<=x_23;a_23++) //2204023
    {
        if(x_23%a_23==0) //2204023
        {
            printf("%d ",a_23);//2204023
            x_23 = x_23/a_23; //2204023
            a_23--; //2204023
        }
    }
}

int main()
{
    int num_23; //2204023
    printf("Enter an integer: "); //2204023
    scanf("%d", &num_23); //2204023
    prime(num_23); //2204023
    getch();
}
