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
    fprintf(fp, "%s %s %s %s\n", newContact.name, newContact.phone, newContact.address, newContact.email);
    fclose(fp);
    printf("Contact added successfully.\n");
}