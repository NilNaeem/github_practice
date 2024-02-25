/*3. Write a program to find the maximum, minimum and average from a
list of floating-point numbers. */

#include<stdio.h>
int main()
{
    int n_23;
    printf("Enter the Value off array size:"); //2204023
    scanf("%d",&n_23);
    float array_23[n_23],sum_23=0,maxi_23=0,mini_23=100000; //2204023
    for(int i_23=0; i_23<n_23; i_23++) //2204023
        {
            scanf("%f",&array_23[i_23]); //2204023
            sum_23+=array_23[i_23]; //2204023
            if(maxi_23<=array_23[i_23]) //2204023
                {
                    maxi_23=array_23[i_23]; //2204023
                }
            if(mini_23>=array_23[i_23]) //2204023
                {
                    mini_23=array_23[i_23]; //2204023
                }
        }
      printf("Maximum= %.2f\nMinimum= %.2f\nAverage= %.2f\n",maxi_23,mini_23,sum_23); //2204023
      return  0;
}
