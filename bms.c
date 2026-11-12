#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Account {
    int accNo;
    char name[50];
    float balance;
};

struct Account acc[MAX];
int count = 0;

// Function declarations
void addAccount();
void displayAccounts();
void searchAccount();
void deposit();
void withdraw();
void saveToFile();
void loadFromFile();

int main() {
    int choice;
    loadFromFile();

    while (1) {
        printf("\n===== Bank Management System =====\n");
        printf("1. Add Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Save to File\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addAccount(); break;
            case 2: displayAccounts(); break;
            case 3: searchAccount(); break;
            case 4: deposit(); break;
            case 5: withdraw(); break;
            case 6: saveToFile(); break;
            case 7: saveToFile(); exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}

//void addAccount() {
//    printf("Enter Account No: ");
//    scanf("%d", &acc[count].accNo);
//    printf("Enter Name: ");
//    scanf(" %[^]", acc[count].name);
//    printf("Enter Initial Balance: ");
//    scanf("%f", &acc[count].balance);
//    count++;
//    printf("Account Added Successfully!\n");
//}

void addAccount() {
    printf("Enter Account No: ");
    scanf("%d", &acc[count].accNo);

    printf("Enter Name: ");
    scanf(" %49[^\n]", acc[count].name);  // FIXED

    printf("Enter Initial Balance: ");
    scanf("%f", &acc[count].balance);

    count++;
    printf("Account Added Successfully!\n");
}

void displayAccounts() {
    printf("\n--- Account List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Acc No: %d | Name: %s | Balance: %.2f\n",
               acc[i].accNo, acc[i].name, acc[i].balance);
    }
}

void searchAccount() {
    int id, found = 0;
    printf("Enter Account No: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (acc[i].accNo == id) {
            printf("Found: %s | Balance: %.2f\n",
                   acc[i].name, acc[i].balance);
            found = 1;
            break;
        }
    }

    if (!found) printf("Account not found!\n");
}

void deposit() {
    int id;
    float amount;

    printf("Enter Account No: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (acc[i].accNo == id) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            acc[i].balance += amount;
            printf("Deposit successful!\n");
            return;
        }
    }
    printf("Account not found!\n");
}

void withdraw() {
    int id;
    float amount;

    printf("Enter Account No: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (acc[i].accNo == id) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > acc[i].balance) {
                printf("Insufficient balance!\n");
            } else {
                acc[i].balance -= amount;
                printf("Withdrawal successful!\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}

void saveToFile() {
    FILE *fp = fopen("bank.txt", "w");
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(acc, sizeof(struct Account), count, fp);
    fclose(fp);
    printf("Data saved successfully!\n");
}

void loadFromFile() {
    FILE *fp = fopen("bank.txt", "r");
    if (fp == NULL) return;

    fread(&count, sizeof(int), 1, fp);
    fread(acc, sizeof(struct Account), count, fp);
    fclose(fp);
}
