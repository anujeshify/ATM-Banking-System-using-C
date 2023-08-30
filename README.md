# ATM Banking System using C

In the present day scenario, banking processes are becoming easier and customers are able to save more time by checking balance and carrying out other processes from any location using ATM machines. We designed an ATM Banking System project for understanding the basic operations that are involved and to add some features that are present in a present day ATM software.

* The ATM (Automated Teller Machine) Banking System is a project that enables the user to access their bank accounts in order to check account balance, make cash withdrawals, change pin or to make a passbook entry.
* It makes it easier for the user to manage most of its banking activities directly from an ATM Machine without personally visiting the bank.
* It is also an efficient and convenient way of managing bank activities as the user does not have to wait in long queues to get their things done.The ATM Banking System is developed in Codeblocks 20.03, which is an open-source, cross platform IDE.


## Getting Started

Know more about the project.

### Basic C functionalities used - 

* Data types
* If-Else Statements
* Loops
* Switch case
* Operators
* Arrays
* FIle Handling

### Control Flow of the Program:

1. **Entry Point**: The program begins by entering a desired language for the user. For the sake of the System, the default language is set to “English”. The program then requests the user to insert a desired card type i.e. either credit or a debit card.

2. **Pin Entry**: The program then requests the user to enter the card PIN. FOR Loop is used to take input from the user. If the input PIN is correct, the program proceeds to perform subsequent functions. If the input PIN is incorrect, the loop is executed again. After 3 incorrect attempts, the flow comes out of the program and displays “Too many wrong attempts”.

3. **Switch Case**: After entering the correct PIN, the program authenticates the PIN entered by the user and shows a set of further actions based on the cases of SWITCH CASE upon completion.

4. **Further Actions**: Based on the requirement of the user, the program can perform the tasks mentioned below using SWITCH CASE in the program. The four actions that can be performed in the ATM machine are:
    * Amount Withdrawal – The program will ask the user to enter the amount to be withdrawn. If the amount is less than the balance of the account, then the program will withdraw the money. If the amount is more than the balance of the account, it will display “Account does not have appropriate Balance”.
    * Check Balance – The program displays the current balance of the bank account of the user.
    * PIN Change – The program will ask the user to enter their current PIN and then would be redirected to change his current PIN to a new one. After the user enters the new PIN, it will get updated across their bank accounts.
    * Passbook Entry – The program will request the user to enter the passbook in the ATM machine and press a “GO” button on the machine upon doing so. After pressing the button, the passbook entry process would begin and if there has been any new transactions in the bank account, it will be printed in the passbook.
    
5. Files: The information of the users will be stored in files which will be handled using the concept of FILE HANDLING (Reading, Writing or Updating the file)


## Built With

* [Code::Blocks](https://www.codeblocks.org/user-manual/) - C Program IDE
* [C](https://devdocs.io/c/) - C Programming Language
 

## Authors

* **Anujesh Bansal** - *Initial work* - [anujeshify](https://github.com/anujeshify)
* **Shashvat Ahuja**
* **Aditi Pandey**

See also the list of [contributors](https://github.com/anujeshify/ATM-Banking-System-using-C/graphs/contributors) who participated in this project.

## Acknowledgments

* Inspiration - I was inspired by the some ATM Banking related projects on GitHub.

