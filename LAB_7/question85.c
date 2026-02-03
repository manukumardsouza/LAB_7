#include <stdio.h>

void checkVowel(char ch) {
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else
        printf("Not a vowel\n");
}

int main() {
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);
    checkVowel(ch);
    return 0;
}
