#include<stdio.h>
struct time 
{  int minute;
int second;
int hour;

}t1,t2,res;
void main()
{
    printf("Enter time 1 in (hh mm ss) format: ");
    scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
    printf("Enter time 2 in (hh mm ss) format: ");
    scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);
    res.hour=t1.hour+t2.hour;
    res.minute=t1.minute+t2.minute;
    res.second=t1.second+t2.second;
    while(res.second>=60)
    {
        res.second-=60;
        res.minute++;
    }
    while(res.minute>=60)
    {
        res.minute-=60;
        res.hour++;
    }
    printf("Result in (hh-mm-ss) format : %d-%d-%d",res.hour,res.minute,res.second);



}