#include<stdio.h>
struct distance 
{
  int feet;
  float inch;
};
void  main ()
{   
struct distance d1;
struct distance d2;
struct distance result;
printf("Enter 1st distance in feet  inches: ");
scanf("%d%f",&d1.feet,&d1.inch);
printf("Enter 2nd distance in feet  inches: ");
scanf("%d%f",&d2.feet,&d2.inch);
result.feet=d1.feet+d2.feet;
result.inch=d1.inch+d1.inch;

while(result.inch>=12)
{
    result.inch=result.inch -12;
    result.feet++;
}
printf("Sum of distance is:%d feet and %f inches ",result.feet,result.inch);

}