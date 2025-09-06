#include <stdio.h>
#include <string.h>


char Title[50][100];
char Autor[50][100];
int Quantity[50];
double Price[50];
int BooksNumber = 0;

void add() {
    printf("Enter book title: ");
    scanf("%99s", Title[BooksNumber]);
    printf("Enter author name: ");
    scanf("%99s", Autor[BooksNumber]);
    printf("Enter quantity: ");
    scanf("%d", &Quantity[BooksNumber]);
    printf("Enter price: ");
    scanf("%lf", &Price[BooksNumber]);
    BooksNumber++;
}

void display() {
    if (BooksNumber == 0) {
        printf("No books in stock\n");
        return;
    }
    for (int i = 0; i < BooksNumber; i++) {
        printf("Title: %s\n", Title[i]);
        printf("Author: %s\n", Autor[i]);
        printf("Quantity: %d\n", Quantity[i]);
        printf("Price: %.2lf\n", Price[i]);
        printf("-------------------\n");
    }
}

void search() {
    char name[100];
    printf("Enter book title to search: ");
    scanf("%99s", name);
    int found = 0;
    for (int i = 0; i < BooksNumber; i++) {
        if (strcmp(name, Title[i]) == 0) {
            printf("Title: %s\n", Title[i]);
            printf("Author: %s\n", Autor[i]);
            printf("Quantity: %d\n", Quantity[i]);
            printf("Price: %.2lf\n", Price[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found\n");
    }
}

void update() {
    char name[100];
    printf("Enter book title to update quantity: ");
    scanf("%99s", name);
    int found = 0;
    for (int i = 0; i < BooksNumber; i++) {
        if (strcmp(name, Title[i]) == 0) {
            printf("Enter new quantity: ");
            scanf("%d", &Quantity[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found\n");
    }
}

void deleteBook() {
    char name[100];
    printf("Enter book title to delete: ");
    scanf("%99s", name);
    int found = 0;
    for (int i = 0; i < BooksNumber; i++) {
        if (strcmp(name, Title[i]) == 0) {
            for (int j = i; j < BooksNumber - 1; j++) {
                strcpy(Title[j], Title[j + 1]);
                strcpy(Autor[j], Autor[j + 1]);
                Quantity[j] = Quantity[j + 1];
                Price[j] = Price[j + 1];
            }
            BooksNumber--;
            found = 1;
            printf("Book deleted\n");
            break;
        }
    }
    if (!found) {
        printf("Book not found\n");
    }
}

void totalBooks() {
    int total = 0;
    for (int i = 0; i < BooksNumber; i++) {
        total += Quantity[i];
    }
    printf("Total books in stock: %d\n", total);
}

int main() {
    int choice;
    do {
        printf("Menu:\n");
        printf("1: Add book\n");
        printf("2: Display all books\n");
        printf("3: Search book by title\n");
        printf("4: Update quantity\n");
        printf("5: Delete book\n");
        printf("6: Total books in stock\n");
        printf("7: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                totalBooks();
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}
