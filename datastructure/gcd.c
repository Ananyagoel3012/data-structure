#include <stdio.h>
int gcd(int a, int b)
{
    if (a < b)
    {
        int t = b;
        b = a;
        a = t;
    }

}
int main()
{
    int num1, num2, ans;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);
    ans = gcd(num1, num2);
    printf("gcd of %d and %d is : %d", num1, num2, ans);
}