#include<stdio.h>

/* normal addition

int main()
{
    float a=3.45,b=5.57,sum;
    sum = a+b;
    printf("The sum is : %.2f",sum);
    return 0
}
*/

// advance addition for taking input from user
void main()
{
    float a,b,c;
    printf("Enter the 1st number :");
    scanf("%f", &a);
    printf("Enter the 2nd number :");
    scanf("%f", &b);
    c = a+b;
    printf("Sum is : %0.2f\n",c);
}
