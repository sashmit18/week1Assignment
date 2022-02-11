#include<stdio.h>
int main()
{
 int reg;
 char name[20];
 char branch[50];
 char hobbies[50];
 printf("Write your name \n");
 gets(name);
 printf("Write your branch name \n");
 gets(branch);
 printf("Write your hobbies \n");
 gets(hobbies);
 printf("Enter the registration number \n");
 scanf("%d",&reg);
 printf(" Your name is:%s\n",name);
 printf("Your branch name is:%s\n",branch);
 printf("Your hobbies are :%s\n", hobbies);  
 printf("Registration number:%d\n",reg);
 return(0);
}