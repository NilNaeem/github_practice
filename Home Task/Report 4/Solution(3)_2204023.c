#include<stdio.h>
int main()
{
    int A[100],n,i,j,k; //2204023
    printf("Enter the number of elements : "); //2204023
    scanf("%d",&n); //2204023

    for(i=0; i<n; i++) //2204023
    {
        printf("A[%d]= ",i); //2204023
        scanf("%d",&A[i]); //2204023
    }

    printf("Before deleting duplicates the Array is: "); //2204023
    for(i=0; i<n; i++) //2204023
    {
        printf("%d ",A[i]); //2204023
    }

    printf("\nAfter deleting duplicates the Array is: "); //2204023




    for(i=0; i<n; i++) //2204023
    {
        for(j=i+1; j<n; j++) //2204023
        {
            if(A[i]==A[j]) //2204023
            {
                for(k=j; k<n; k++) //2204023
                {
                    A[k]=A[k+1]; //2204023
                }
                n--; //2204023
                j--; //2204023
            }
        }
    }

    for(i=0; i<n; i++) //2204023
    {
        printf("%d ",A[i]); //2204023
    }
    getch();
    return 0;
}





























