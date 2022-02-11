#include<stdio.h>
int main()
{
    float radius, diameter, circum,Area;
    float pie=3.14;
    printf("Enter the value of radius\n");
    scanf("%f",&radius);
    diameter=radius/2;
    circum=2*pie*radius;
    Area=pie*radius*radius;
    printf("The diameter of circle is:%f\n",diameter);
    printf("The circumference of circle is:%f \n",circum);
    printf("The Area of circle is: %f \n",Area);
    return(0);
}
    