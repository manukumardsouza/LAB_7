#include <stdio.h>

int stringLength(char s[]) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

int main() {
    char str[50];
    printf("Enter string: ");
    scanf("%s", str);

    printf("Length = %d\n", stringLength(str));
    return 0;
}
