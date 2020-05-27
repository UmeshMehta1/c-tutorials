#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int i;
    printf("The first %d fibonacci numbers are: ", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}