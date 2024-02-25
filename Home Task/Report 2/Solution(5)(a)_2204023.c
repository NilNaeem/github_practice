#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,fact=1,i,j;
    float series,sum=0;
    printf("Enter x value and n-th term: ");
    scanf("%d%d",&x,&n);
    for(i=2; i<=n+1; i++)
    {
        for(j=1; j<=i; j++)
        {
            fact*=j;
        }
        if(i%2==0)
        {
            series=((-1)*pow(x,i))/fact;
        }
        else
        {
            series=pow(x,i)/fact;
        }
        sum+=series;
        fact=1;
    }
    printf("The summation is: %f",sum);
    getch();
}
