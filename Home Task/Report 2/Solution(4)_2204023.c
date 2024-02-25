#include<stdio.h>
int main()
{
    int n,temp,rev=0,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(temp==rev)
        printf("%d is a palindrome",temp);
    else
        printf("%d is not a palindrome",temp);
    getch();
}
