#include <stdio.h>

void checkPalindrome(int n) {
    int rev = 0, temp = n;

    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (rev == n)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    checkPalindrome(n);
    return 0;
}
