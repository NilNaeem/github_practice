#include<stdio.h>
int main()
{
    int i,n,a=1,sum=0;
    printf("Enter the number of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum=sum+a;
        a+=2;
    }
    printf("The summation is: %d\n",sum);
    printf("The average is: %f",(float)sum/n);

    getch();
}
