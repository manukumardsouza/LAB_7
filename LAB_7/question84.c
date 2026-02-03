#include <stdio.h>

struct Book {
    char name[50];
    int price;
};

int main() {
    struct Book b;
    printf("Enter book name and price:\n");
    scanf("%s %d", b.name, &b.price);

    printf("Book Name: %s\nPrice: %d\n", b.name, b.price);
    return 0;
}
