#include<stdio.h>
int main()
{
    int n,largest=0,secondLargest=0;
    printf("Enter a natural number But enter 0 to STOP: ");
    scanf("%d",&n);

    while(n!=0)
    {
        while(n<0)
        {
        printf("Error!! Only Enter a natural number But enter 0 to STOP: ");
        scanf("%d",&n);
        }

        if(n>largest)
        {
            secondLargest=largest;
            largest=n;
        }
        printf("Enter a natural number But enter 0 to STOP: ");
        scanf("%d",&n);
    }
        printf("The Second Largest is= %d",secondLargest);


}
