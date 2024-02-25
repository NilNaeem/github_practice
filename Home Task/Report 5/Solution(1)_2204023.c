#include<stdio.h>
int pattern1()
{
    int n_23,i_23,j_23; //2204023
    printf("Enter the value of N: "); //2204023
    scanf("%d",&n_23);
    for(i_23=n_23; i_23>=1; i_23--) //2204023
    {
        for(j_23=1; j_23<=i_23*2-1; j_23++) //2204023
        {
            printf("%d",i_23); //2204023
        }
        printf("\n"); //2204023
    }
}

int pattern2()
{
    int n_23=4,a_23,b_23,i_23,j_23; //2204023
    printf("Enter the value of N: "); //2204023
    scanf("%d",&n_23);
    for(i_23=n_23*2-1; i_23>=1; i_23-=2) //2204023
    {
        b_23=i_23; //2204023
        a_23=n_23; //2204023
        for(j_23=1; j_23<=i_23*2-1; j_23++) //2204023
        {
            if(b_23>0) //2204023
            printf("%d",b_23--); //2204023
        }
        printf("\n"); //2204023
        a_23-=2;

    }
}
int pattern3()
{
    int n_23=3,i_23,j_23; //2204023
    printf("Enter the value of N: "); //2204023
    scanf("%d",&n_23);
    for(i_23=n_23; i_23>=1; i_23--) //2204023
    {
        for(j_23=1; j_23<=i_23*2-1; j_23++) //2204023
        {
            printf("*"); //2204023
        }
        printf("\n"); //2204023
    }
    for(i_23=2; i_23<=n_23; i_23++) //2204023
    {
        for(j_23=1; j_23<=i_23*2-1; j_23++) //2204023
        {
            printf("*"); //2204023
        }
        printf("\n"); //2204023
    }
}

int main()
{
    pattern1(); //2204023
    printf("\n"); //2204023
    pattern2(); //2204023
    printf("\n"); //2204023
    pattern3(); //2204023
    getch(); //2204023
}
