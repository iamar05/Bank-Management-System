# 🏦 Bank Management System (C)
 
A simple console-based Bank Management System written in C. It lets you create and manage bank accounts from the terminal, with data saved to a file so it persists between runs.
 
## 📸 Screenshot
 
![Bank Management System Menu](screenshots/menu.png)
 
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
## 📂 Project Structure
 
```
bank-management-system/
├── main.c            # Source code
├── bank.txt          # Auto-generated data file (created on first save)
├── screenshots/
│   └── menu.png      # Terminal screenshot
└── README.md
```
 
## 🚀 Getting Started
 
### Prerequisites
 
A C compiler such as [GCC](https://gcc.gnu.org/) (on Windows, use MinGW or WSL).
 
### Clone the Repository
 
```bash
git clone https://github.com/<your-username>/bank-management-system.git
cd bank-management-system
```
 
### Compile
 
```bash
gcc main.c -o bank
```
 
### Run
 
```bash
# Linux / macOS
./bank
 
# Windows
bank.exe
```
 
## 📖 Usage
 
When you run the program, you'll see this menu:
 
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
 
## 🧠 How It Works
 
- Accounts are stored in an array of `struct Account` (up to `MAX = 100` accounts).
- Each account holds an account number (`int`), a name (`char[50]`), and a balance (`float`).
- `saveToFile()` writes the account count followed by the account records to `bank.txt` in binary format.
- `loadFromFile()` reads them back when the program starts.
## ⚠️ Known Limitations
 
- No check for duplicate account numbers
- No check for exceeding the 100-account limit
- Limited input validation (e.g., non-numeric input in menus)
- Data file is binary, so `bank.txt` is not human-readable
- No negative-amount checks on deposit/withdraw
## 🔮 Future Improvements
 
- [ ] Prevent duplicate account numbers
- [ ] Add input validation
- [ ] Add delete / update account features
- [ ] Add transaction history
- [ ] Add PIN-based authentication
- [ ] Use dynamic memory allocation instead of a fixed array
