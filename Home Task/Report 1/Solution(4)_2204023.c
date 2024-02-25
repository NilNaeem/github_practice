#include<stdio.h>
int main()
{
    int num1_23,num2_23;
    char ch_23;
    printf("ENTER YOUR CALCULATION: ");
    scanf("%d%c%d",&num1_23,&ch_23,&num2_23);
    switch(ch_23)
    {
        case '+':
            printf("The summation is: %d\n",num1_23+num2_23);
            break;
        case '-':
            printf("The subtraction is: %d\n",num1_23-num2_23);
            break;
        case '*':
            printf("The multiplication is: %d\n",num1_23*num2_23);
            break;
        case '/':
            if(num2_23!=0)
                printf("The division is: %f\n",(float)num1_23/num2_23);
            else
                printf("Error: Division by zero is not allowed\n");
            break;
        default:
            printf("Error: Invalid operator entered\n");
    }
    return 0;
}
