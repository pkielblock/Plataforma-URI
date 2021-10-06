#include <stdio.h>
 
int main() {
 
    int t, n, i;
    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i <= 60; i++)
    {
        fib[i] = fib[i - 1]  + fib[i - 2];
    }

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
        
    }

    return 0;
}