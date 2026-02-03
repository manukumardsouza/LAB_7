#include <stdio.h>

long factorial(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    long ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("NCR = %ld\n", ncr);
    return 0;
}
