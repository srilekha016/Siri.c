#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", a, b);
for (int i = 3; i <= n; i++)
{
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
