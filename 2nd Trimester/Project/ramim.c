#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 #define MAX_CONTACTS 100
#define FILE_PATH "contacts.txt"
 typedef struct {
    char name[50];
    char phone[20];
    char address[100];
    char email[50];
} Contact;
void addContact() {
    Contact newContact;
    printf("Enter name: ");
    getchar();
    fgets(newContact.name, sizeof(newContact.name), stdin);
    newContact.name[strcspn(newContact.name, "\n")] = 0;
     printf("Enter phone number: ");
    scanf("%s", newContact.phone);
    printf("Enter address: ");
    getchar();
    fgets(newContact.address, sizeof(newContact.address), stdin);
    newContact.address[strcspn(newContact.address, "\n")] = 0;
     printf("Enter email: ");
    scanf("%s", newContact.email);
     FILE *fp;
    fp = fopen(FILE_PATH, "a");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }
    fprintf(fp, "\"%s\" %s \"%s\" %s\n", newContact.name, newContact.phone, newContact.address, newContact.email);
    fclose(fp);
    printf("Contact added successfully.\n");
}
 void showContacts() {
    FILE *fp;
    fp = fopen(FILE_PATH, "r");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }
    char buffer[255];
    printf("Contacts:\n");
    while (fgets(buffer, 255, fp) != NULL) {
        char name[50], phone[20], address[100], email[50];
        sscanf(buffer, "\"%[^\"]\" %s \"%[^\"]\" %s", name, phone, address, email);
        printf("Name: %s\n", name);
        printf("Phone: %s\n", phone);
        printf("Address: %s\n", address);
        printf("Email: %s\n", email);
    }
    fclose(fp);
}
 void editContact() {
    char name[50];
    printf("Enter name of contact to edit: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
     FILE *fp;
    fp = fopen(FILE_PATH, "r");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }
    FILE *fpTemp;
    fpTemp = fopen("temp.txt", "w");
    if (fpTemp == NULL) {
        printf("Error: Unable to open file.\n");
        fclose(fp);
        return;
    }
     char buffer[255];
    int found = 0;
    while (fgets(buffer, 255, fp) != NULL) {
        char contactName[50], phone[20], address[100], email[50];
        sscanf(buffer, "\"%[^\"]\" %s \"%[^\"]\" %s", contactName, phone, address, email);
        if (strcmp(contactName, name) == 0) {
            Contact newContact;
            printf("Enter updated name: ");
            fgets(newContact.name, sizeof(newContact.name), stdin);
            newContact.name[strcspn(newContact.name, "\n")] = 0;
            printf("Enter updated phone number: ");
            scanf("%s", newContact.phone);
            printf("Enter updated address: ");
            getchar();
            fgets(newContact.address, sizeof(newContact.address), stdin);
            newContact.address[strcspn(newContact.address, "\n")] = 0;
            printf("Enter updated email: ");
            scanf("%s", newContact.email);
            fprintf(fpTemp, "\"%s\" %s \"%s\" %s\n", newContact.name, newContact.phone, newContact.address, newContact.email);
            printf("Contact updated successfully.\n");
            found = 1;
        } else {
            fprintf(fpTemp, "%s", buffer);
        }
    }
    fclose(fp);
    fclose(fpTemp);
    remove(FILE_PATH);
    rename("temp.txt", FILE_PATH);
    if (!found) {
        printf("Error: Contact not found.\n");
    }
}
 void deleteContact() {
    char name[50];
    printf("Enter name of contact to delete: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
     FILE *fp;
    fp = fopen(FILE_PATH, "r");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }
    FILE *fpTemp;
    fpTemp = fopen("temp.txt", "w");
    if (fpTemp == NULL) {
        printf("Error: Unable to open file.\n");
        fclose(fp);
        return;
    }
     char buffer[255];
    int found = 0;
    while (fgets(buffer, 255, fp) != NULL) {
        char contactName[50], phone[20], address[100], email[50];
        sscanf(buffer, "%s %s %s %s", contactName, phone, address, email);
        if (strcmp(contactName, name) == 0) {
            printf("Contact deleted successfully.\n");
            found = 1;
        } else {
            fprintf(fpTemp, "%s", buffer);
        }
    }
    fclose(fp);
    fclose(fpTemp);
    remove(FILE_PATH);
    rename("temp.txt", FILE_PATH);
    if (!found) {
        printf("Error: Contact not found.\n");
    }
}
 int main() {
    int choice;
    while (1) {
        printf("Address Book Management System\n");
        printf("1. Add new contact\n");
        printf("2. Show all contacts\n");
        printf("3. Edit a contact\n");
        printf("4. Delete a contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                showContacts();
                break;
            case 3:
                editContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
