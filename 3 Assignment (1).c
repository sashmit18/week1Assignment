#include<stdio.h>
int main()
{
    int X,num;
    printf("Enter the number \n");
    scanf("%d", &num);
    X=num%2;
    switch(X)
    {
    case 0:
        printf("The no. is even");
        break;
    case 1:
        printf("The no.is odd");
        break;
    }
    return(0);
} 
