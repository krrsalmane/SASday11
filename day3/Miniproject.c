#include <stdio.h>
#include <string.h>

struct Contact {
    char nom[50];
    char telephone[20];
    char email[50];
};










int main() {
    struct Contact contacts[100];
    int n = 0;
    int choix;
    
    do {
        printf("\n1. Ajouter un contact\n2. Modifier un contact\n3. Supprimer un contact\n4. Afficher tous les contacts\n5. Rechercher un contact\n6. Quitter\nVotre choix: ");
        scanf("%d", &choix);
        getchar();
        
        if(choix == 1) ajouter(contacts, &n);
        else if(choix == 2) modifier(contacts, n);
        else if(choix == 3) supprimer(contacts, &n);
        else if(choix == 4) afficher(contacts, n);
        else if(choix == 5) rechercher(contacts, n);
    } while(choix != 6);
    
    return 0;
}
