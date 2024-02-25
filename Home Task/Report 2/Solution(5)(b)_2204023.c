#include<stdio.h>
int main()
{
    int n,sum=0,i,j;
    printf("Enter the n-th term of series: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            sum=sum+j;
        }
    }
    printf("The summation is: %d",sum);
    getch();
}
