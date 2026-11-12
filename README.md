# 🏦 Bank Management System (C)
 A simple console-based Bank Management System built in C. It allows users to create accounts, view and search account details, deposit and withdraw money, and save all data to a file so it persists between sessions. Built to practice structures, arrays, and file handling in C.
  
## ✨ Features
 
- **Add Account**: create an account with an account number, holder name, and initial balance
- **Display Accounts**: list all accounts with their details
- **Search Account**: find an account by account number
- **Deposit Money**: add funds to an existing account
- **Withdraw Money**: withdraw funds, with an insufficient-balance check
- **Save to File**: store all account data in `bank.txt`
- **Auto Load**: previously saved data is loaded automatically on startup
- **Auto Save on Exit**: data is saved when you choose Exit
## 🛠️ Technologies Used
 
- C programming language
- Standard libraries: `stdio.h`, `stdlib.h`, `string.h`
- Structures, arrays, and file handling (`fread` / `fwrite`)
## 📖 Main Operations
 

```
===== Bank Management System =====
1. Add Account
2. Display Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Save to File
7. Exit
Enter choice:
```
 
Enter the number of the option you want and follow the on-screen prompts.
 
### Example
 
```
Enter choice: 1
Enter Account No: 1001
Enter Name: Abidur Rahman
Enter Initial Balance: 5000
Account Added Successfully!
```
