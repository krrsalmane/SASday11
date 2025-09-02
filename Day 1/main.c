#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    char lastName[50];
    int age;
    char email[100];
    char adresse[100];

    printf("My name is: ");
    scanf("%49s", name);

    printf("My last name is: ");
    scanf("%49s", lastName);

    printf("I am: ");
    scanf("%d", &age);

    printf("My email address is: ");
    scanf("%99s", email);

    printf("My actual address is: ");
    scanf("%99s", adresse);

    printf("\n--- User Info ---\n");
    printf("Name: %s %s\n", name, lastName);
    printf("Age: %d\n", age);
    printf("Email: %s\n", email);
    printf("Address: %s\n", adresse);

    return 0;
}
