#include<stdio.h>
int main()
{
    int num1,num=15;
    char ch;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&num1);
        if(num1>num)
        {
            printf("It is greater than %d.\n",num);
        }
        else if(num1<num)
        {
            printf("It is less than %d.\n",num);
        }
        else
        {
            printf("It is equal to %d.\n",num);
        }
        printf("Do you want to continue (y/n)? ");
        scanf(" %c",&ch);
        num=num1;
    }
    while(ch=='y');
    return 0;
}
