#include <stdio.h>

void checkArmstrong(int n) {
    int sum = 0, temp = n, digit;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    checkArmstrong(n);
    return 0;
}
