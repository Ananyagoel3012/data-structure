#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else if (n == 3)
    {
        return 2;
    }
    else
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}
int main()
{
    int n, ans;
    printf("Enter n: ");
    scanf("%d", &n);
    ans = fibonacci(n);
    printf("%dth  fibonacci number is: %d", n, ans);
    return 0;
}