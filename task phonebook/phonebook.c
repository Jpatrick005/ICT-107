#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    char name[50];
    char contactNumber[15];
} PhonebookEntry;

PhonebookEntry phonebook[MAX_ENTRIES];
int entryCount = 0;

void addEntry() {
    if (entryCount < MAX_ENTRIES) {
        printf("Enter Name: ");
        scanf(" %[^\n]", phonebook[entryCount].name);
        printf("Enter Contact Number: ");
        scanf(" %[^\n]", phonebook[entryCount].contactNumber);
        entryCount++;
        printf("Entry Successfully Added! Another Process? Y or N\n");
    } else {
        printf("Phonebook is full!\n");
    }
}

void viewEntries() {
    if (entryCount == 0) {
        printf("No entries found.\n");
    } else {
        for (int i = 0; i < entryCount; i++) {
            printf("%d %s\n%s\n", i + 1, phonebook[i].name, phonebook[i].contactNumber);
        }
    }
    printf("Press Any Key To Exit!\n");
}

void editEntry() {
    int index;
    printf("Enter Entry Number To Be Edited: ");
    scanf("%d", &index);
    if (index > 0 && index <= entryCount) {
        printf("Enter Name: ");
        scanf(" %[^\n]", phonebook[index - 1].name);
        printf("Enter Contact Number: ");
        scanf(" %[^\n]", phonebook[index - 1].contactNumber);
        printf("Entry Successfully Edited! Another Process? Y or N\n");
    } else {
        printf("Invalid entry number!\n");
    }
}

void deleteEntry() {
    int index;
    printf("Enter Entry Number To Be Deleted: ");
    scanf("%d", &index);
    if (index > 0 && index <= entryCount) {
        for (int i = index - 1; i < entryCount - 1; i++) {
            phonebook[i] = phonebook[i + 1];
        }
        entryCount--;
        printf("Entry Successfully Deleted! Another Process? Y or N\n");
    } else {
        printf("Invalid entry number!\n");
    }
}

void searchEntry() {
    char name[50];
    printf("Enter Name To Search: ");
    scanf(" %[^\n]", name);
    int found = 0;
    for (int i = 0; i < entryCount; i++) {
        if (strstr(phonebook[i].name, name)) {
            printf("%d %s\n%s\n", i + 1, phonebook[i].name, phonebook[i].contactNumber);
            found = 1;
        }
    }
    if (!found) {
        printf("No matching entries found.\n");
    }
}

int main() {
    int choice;
    char anotherProcess = 'Y';

    while (anotherProcess == 'Y' || anotherProcess == 'y') {
        printf("Press,\n1 Add Entry\n2 View Entry\n3 Edit Entry\n4 Delete Entry\n5 Search Entry\n6 Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEntry();
                break;
            case 2:
                viewEntries();
                break;
            case 3:
                editEntry();
                break;
            case 4:
                deleteEntry();
                break;
            case 5:
                searchEntry();
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("Another Process? Y or N\n");
        scanf(" %c", &anotherProcess);
    }

    return 0;
}

