#include<stdio.h>
struct number
{
int real;
int imagenary;
}num1,num2,result;
void  main()
{   
     printf("Enter 1st number: ");
scanf("%d%d",&num1.real,&num1.imagenary);
     printf("Enter 2nd number: ");
scanf("%d%d",&num2.real,&num2.imagenary);
printf("Result is : %d +(%dj)",num1.real+num2.real,num1.imagenary+num2.imagenary);

}