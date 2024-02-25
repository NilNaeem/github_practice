/*  Write a program to make a list of integers taking input from user.
Then insert a value in that list at a desired location (not index) which
will be user input as well. */

#include<stdio.h>
int main()
{
    int n_23,i_23,d_23,l_23; //2204023
    printf("Enter the number of array element:"); //2204023
    scanf("%d",&n_23); //2204023
    int arr_23[n_23]; //2204023
    printf("Enter %d integers: ",n_23); //2204023
    for(i_23=1; i_23<=n_23; i_23++){ //2204023
        scanf("%d",&arr_23[i_23]); //2204023
    }
    printf("Insert in the list: "); //2204023
    scanf("%d",&d_23);
    printf("Enter location to insert at: "); //2204023
    scanf("%d",&l_23);
    printf("List before insertion of new data:"); //2204023
    for(i_23=1; i_23<=n_23; i_23++){ //2204023
           printf("%d,",arr_23[i_23]); //2204023
     }
    for(i_23=n_23+1; i_23>l_23; i_23--){ //2204023
        arr_23[i_23]=arr_23[i_23-1]; //2204023
    }
           arr_23[l_23]=d_23; //2204023
   printf("\nList after insertion of new data:"); //2204023
    for(i_23=1; i_23<=n_23+1; i_23++){ //2204023
        printf("%d,",arr_23[i_23]); //2204023
    }
    return 0;
}
