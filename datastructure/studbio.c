#include <stdio.h>
struct stu
{
    int rollno;
    char name[25];
    int age;
    char add[100];
    int marks;

} s[15];
int main()
{
    int n = 15;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the name of %d th student : ", i);
        scanf("%s", s[i].name);
        printf("\nEnter rool no age marks of %d th student : ", i);
        scanf("%d%d%d", &s[i].rollno, &s[i].age, &s[i].marks);
        printf("\nEnter address of %d th student : ", i);
        scanf("%s", s[i].add);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("Student name : ");
        printf("%s\n", s[i].name);
        printf("Roll no\tAge\tMarks\n");
        printf("%d\t%dyears\t%d\n", s[i].rollno, s[i].age, s[i].marks);
        printf("Address is : ");
        printf("%s\n", s[i].add);
    }

    return 0;
}