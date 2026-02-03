#include <stdio.h>

struct Student {
    char name[30];
    int marks;
};

int main() {
    struct Student s[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter name and marks: ");
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    printf("\nStudents with marks > 500:\n");
    for (int i = 0; i < 10; i++) {
        if (s[i].marks > 500)
            printf("%s %d\n", s[i].name, s[i].marks);
    }
    return 0;
}
