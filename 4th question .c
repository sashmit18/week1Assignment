#include<stdio.h>
void main()
{
    int a, b, sum, mult, sub, div ,rem;
    printf("Enter the value of a and b \n");
    scanf("%d %d", &a,&b);
    sum=a+b;
    mult=a*b;
    div=a/b;
    rem=a%b;
    switch(1)
    {
    case 1:
    printf("The value of addition is:%d \n",sum);
    case 2:
    printf("The value of Multiplication is:%d \n",mult);
    case 3:
    printf("The value of division is:%d \n",div);
    case 4:
    printf("The value of reminder is:%d \n",rem);
    break;
    }
}
    