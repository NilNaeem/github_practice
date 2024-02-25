#include<stdio.h>
int main()
{
    int start,end,prime,temp,count=0,num,count1=0,result;
    printf("Enter the value of[start,end]: ");
    scanf("%d%d",&start,&end);
    if(start>end)
    {
        temp=start;
        start=end;
        end=temp;
    }
    for(num=start; num<=end; num++)
    {
       prime=1;
        if(num<=1)
            prime=0;

        for(count=2;count<num;count++)
        {
            if(num%count==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\t",num);
            count1++;
        }
    }
    printf("\n");
    printf("The total number of prime in range: %d",count1);
    getch();
}
