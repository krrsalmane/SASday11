#include <stdio.h>
#include <string.h>


#define MAX 100

typedef struct
{
    char name[MAX];
    char phone[12];
    char email[MAX];
} Contact;

Contact contact[MAX];
int countContacts = 0;





void addContact()
{

    char choice;
    do
    {

        printf("Enter name of contact :");
        fgets(contact[countContacts].name, sizeof(contact[countContacts].name), stdin);
        contact[countContacts].name[strcspn(contact[countContacts].name, "\n")] = '\0'; 


        printf("Enter phone of contact :");
        fgets(contact[countContacts].phone, sizeof(contact[countContacts].phone), stdin);
        contact[countContacts].phone[strcspn(contact[countContacts].phone, "\n")] = '\0';

        printf("Enter email of contact :");
        fgets(contact[countContacts].email, sizeof(contact[countContacts].email), stdin);
        contact[countContacts].email[strcspn(contact[countContacts].email, "\n")]= '\0';

        countContacts++;

        printf(" add another contact (y / n):");
        scanf("%c",&choice);
        getchar();

    } while (choice == 'y' || choice== 'Y');

}



void displayContact()
{

    printf("--------- Contact List ---------\n");
    for (int i = 0; i < countContacts; i++)
    {
        printf("--------- Contact %d ---------\n", i + 1);
        printf("| Contact name : %s \n| Contact phone : %s \n| Contact email : %s", contact[i].name, contact[i].phone, contact[i].email);
        printf("\n------------------------\n");
    }
}



int main()
{

    int choice;
    char contactName[MAX];



    do
    {
        printf("1 - Add Contact \n");
        printf("2 - Diplay Contacts \n");
        printf("3 - Delete Contact \n");
        printf("4 -  Modify Conatct\n");
        printf("5 - Search Contact \n");
        printf("6 - Quit \n");

        printf("Enter ur choice :\n");
        scanf("%d",&choice);
        getchar();

        if (choice < 0 || choice>6)
        {
            printf("Invalide choice !\n");
        }

        switch (choice)
        {
        case 1:
           addContact();
            break;

        case 2:
         displayContact();
            break;    

        case 3:
           
            break;

        case 4:
          
            break; 
            
        case 5:
       
            break;  
            
        case 6:
        printf("Good Bye !!");
            break;    
        
        default:
            break;
        }
        

    } while (choice != 6 );
    
}