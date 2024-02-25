#include <stdio.h>
void bubbleSort(int arr_23[], int n_23) //2204023
{
    for (int i_23=0; i_23< n_23-1; i_23++) //2204023
    {
        for (int j_23=0; j_23< n_23-i_23-1; j_23++) //2204023
        {
            if (arr_23[j_23]>arr_23[j_23+1]) //2204023
            {
                int temp_23 = arr_23[j_23]; //2204023
                arr_23[j_23] = arr_23[j_23+1]; //2204023
                arr_23[j_23+1] = temp_23; //2204023
            }
        }
    }
}
int Maximum(int arr_23[], int n_23, int k_23) //2204023
{
    bubbleSort(arr_23, n_23); //2204023
    return arr_23[n_23 - k_23]; //2204023
}
int Minimum(int arr_23[], int n_23, int k_23) //2204023
{
    bubbleSort(arr_23, n_23); //2204023
    return arr_23[k_23 - 1]; //2204023
}
int main()
{
    int arr_23[] = {3, 8, 1, 9, 4, 5, 7}; //2204023
    int n_23 = sizeof(arr_23) / sizeof(arr_23[0]); //2204023
    int k_23;
    printf("Enter K-th Number: "); //2204023
    scanf("%d",&k_23); //2204023

    printf("Original array: "); //2204023
    for (int i_23=0; i_23<n_23; i_23++) //2204023
    {
        printf("%d ", arr_23[i_23]); //2204023
    }
    printf("\n"); //2204023

    printf("The %d-th maximum element is: %d\n",
           k_23, Maximum(arr_23, n_23, k_23)); //2204023
    printf("The %d-th minimum element is: %d\n",
           k_23, Minimum(arr_23, n_23, k_23)); //2204023

    getch();
    return 0;
}







