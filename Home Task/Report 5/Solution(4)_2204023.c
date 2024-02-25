#include<stdio.h>
int fibo(int i_23)
{
    if(i_23==1)
        return 0;
    else if(i_23==2||i_23==3)
        return 1;
    else
        return (fibo(i_23-1)+fibo(i_23-2));
}

int main()
{
    int n_23,i_23,x_23,sum_23=0;
    printf("Enter the n-th term of fibonacci series: ");
    scanf("%d",&n_23);
    for(i_23=1; i_23<=n_23; i_23++)
    {
        x_23=fibo(i_23);
        printf("%d ",x_23);
        sum_23+=x_23;
    }
    printf("\nThe summation of fibonacci series: %d",sum_23);
    getch();
}
