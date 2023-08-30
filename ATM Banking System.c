//This will include all functions for standard input and output for the program
//including file for standard input and output and other etc work
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
//Main function declared
//All the commmands for the program are listed here

int main()
{

    //Variables used in the program are listed here
    //both integer and char variables are listed here
    int pin,pinloop=0,command,balance1=100000,balance2=200000,balance3=300000,balance4=100000,balance5=10000,balance6=20000,gotog,cpin,npin1,npin2,i;
    char str1[100],str2[100],str3[100],str4[100],str5[100],str6[100],string1[100],string2[100],string3[100],string4[100],string5[100],string6[100];


    //Declaring file pointer to use file
    //File pointer is a pointer which is used to handle and keep track on the files being accessed.
    FILE *ptr1=NULL;
    FILE *ptr2=NULL;
    FILE *ptr3=NULL;
    FILE *ptr4=NULL;
    FILE *ptr5=NULL;
    FILE *ptr6=NULL;
    
    //fopen() function is used to open a file that returns a FILE pointer. Once file is opened, file pointer can be used to perform I/O operations on the file.
    //Opening the file using file pointer and File Handling Operations
    
    ptr1=fopen("file1.txt","a+");
    ptr2=fopen("file2.txt","a+");
    ptr3=fopen("file3.txt","a+");
    ptr4=fopen("file4.txt","a+");
    ptr5=fopen("file5.txt","a+");
    ptr6=fopen("file6.txt","a+");
    
    printf("\n************************************************************************");
    printf("\n************************************************************************");
    printf("\n");

    //First statement of the program
    //main content of the program starts here
    printf("\n\tWELCOME TO THE ARTIFICIAL BANK OF INDIA\n");
    printf("\n************************************************************************");
    printf("\n************************************************************************");
    printf("\n");
    //by default the language set is computer preffered
    printf("\nBy Default the language is set to English :)\n");

    //A Few common statements for each account holder file
    //these are the top level lines of the program files
    //The fputs() function writes a line of characters into file. It outputs string to a stream.
    fputs("THIS IS OFFICIAL FILE OF ARTIFICIAL BANK OF INDIA",ptr1);
    fputs("THIS IS OFFICIAL FILE OF ARTIFICIAL BANK OF INDIA",ptr2);
    fputs("THIS IS OFFICIAL FILE OF ARTIFICIAL BANK OF INDIA",ptr3);
    fputs("THIS IS OFFICIAL FILE OF ARTIFICIAL BANK OF INDIA",ptr4);
    fputs("THIS IS OFFICIAL FILE OF ARTIFICIAL BANK OF INDIA",ptr5);
    fputs("THIS IS OFFICIAL FILE OF ARTIFICIAL BANK OF INDIA",ptr6);
    
    fputs("\nTHIS FILE CONTAINS ALL THE INFORMATION OF THE PURTICULAR USE OF A.B.I",ptr1);
    fputs("\nTHIS FILE CONTAINS ALL THE INFORMATION OF THE PURTICULAR USE OF A.B.I",ptr2);
    fputs("\nTHIS FILE CONTAINS ALL THE INFORMATION OF THE PURTICULAR USE OF A.B.I",ptr3);
    fputs("\nTHIS FILE CONTAINS ALL THE INFORMATION OF THE PURTICULAR USE OF A.B.I",ptr4);
    fputs("\nTHIS FILE CONTAINS ALL THE INFORMATION OF THE PURTICULAR USE OF A.B.I",ptr5);
    fputs("\nTHIS FILE CONTAINS ALL THE INFORMATION OF THE PURTICULAR USE OF A.B.I",ptr6);

    //Loop to check pin before performing any further task
    //It will request for correct pin 3 times and if not found will finish the program and user's account will be locked
    //for 24 hrs.It will reactivate after 24 hrs only.
    //A while loop in C programming repeatedly executes a target statement as long as a given condition is true.
    while(pinloop<3)
    {
        printf("\nPlease Enter your ATM PIN to access Artificial Bank of India\'s ATM Services");
        printf("\nENTER PIN: ");
        scanf("%d",&pin);

        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
        while(i<900000000)
        {
            i++;
        }
        
        //Only proceed if pin was found correct
        //Or operator to check if pin was one of correct.
        //The if statement evaluates the test expression inside the parenthesis ().

        //If the test expression is evaluated to true, statements inside the body of if are executed.
        //If the test expression is evaluated to false, statements inside the body of if are not executed.
        if((pin==001)||(pin==002)||(pin==003)||(pin==004)||(pin==005)||(pin==006))
        {
            //The label is an identifier. When the goto statement is encountered, the control of the program jumps to label: and starts executing the code.
            //A g label is used so that if costumer wants to do other tasks so he could do so
            //goto commands used in following commands can be used to divert the user here to access the Main Menu
            g:

            //The Main Menu of the ATM processes
            //Commands for the program are listed here
            printf("\nList of Services this ATM Machine offers:");
            printf("\n1. WITHDRAW MONEY");
            printf("\n2. CHECK BALANCE");
            printf("\n3. CHANGE PIN");
            printf("\n4. PASSBOOK ENTRY\n");
            printf("\nPlease Enter the Number corressponding to the service you want to access: ");
            
            //Scanf to enter command by user.
            //In the C programming language, scanf is a function that reads formatted data from stdin (i.e, the standard input stream, which is usually the keyboard, unless redirected) and then writes the results into the arguments given.
            scanf("%d",&command);

            //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
            //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
            while(i<900000000)
            {
                i++;
            }
            
            //Switch case is used to perform functions according to the command.
            //Switch statement in C tests the value of a variable and compares it with multiple cases.
            //Once the case match is found, a block of statements associated with that particular case is executed.
            //Each case in a block of a switch has a different name/number which is referred to as an identifier.
            switch(command)
            {


                //Case 1 is to withdraw amount
                //WITHDRAW AMOUNT//
                case 1:
                {

                    //Declaring a variable 'amt' which will store the amount to be withdrawn
                    int amt;

                    //Condition if the the PIN is 001
                    if(pin==001)
                    {

                        //Following Commands are used to retrieve strings from the files using File Handling Operation
                        //Using 'fgets' and 'printf' commands 3 times to retrieve all the information from the user file
                        
                        fgets(str1,100,ptr1);
                        printf("%s",str1);
                        fgets(str1,100,ptr1);
                        printf("%s",str1);
                        fgets(str1,100,ptr1);
                        printf("%s",str1);

                        //Taking input for the Withdraw Amount from the user
                        printf("\nEnter the Amount to be Withdrawn: ");
                        scanf("%d",&amt);
                        fputs("\nWITHDRAWING AMOUNT FROM ACCOUNT",ptr1);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //If the amount to be withdrawn is greater than the Account Balance then it will show error as it will not be possible to withdraw such amount
                        if(amt>balance1)
                        {
                            
                            printf("\nError!\n");
                            printf("Insufficient Balance!\n");
                            printf("\nPlease Deposit more Money in your Bank Account to withdraw this amount\n");
                        }

                        //ATM Machines do not take values other than multiples of 100 as it contains currency in that denomination only
                        else if(amt%100!=0)
                        {
                            printf("\nError!\n");
                            printf("Please Enter the amount in the Multiples of 100\n");
                        }

                        //Finally, if all the conditions are met, the Amount is Withdrawn and the Withdrawn Amount gets reduced from the Account Balance
                        //The current balance is shown after reduction of withdrwn money
                        
                        else
                        {
                            
                            balance1=balance1-amt;
                            printf("\nAmount Withdrawn Successfully!\n");
                            printf("Please Collect your Cash from the Cash Dispenser\n");
                            printf("\nYour Current Account Balance is Rs%d\n",balance1);
                        }

                        fclose(ptr1);

                    }

                    //Condition if the the PIN is 002
                    else if(pin==002)
                    {

                        //Following Commands are used to retrieve strings from the files using File Handling Operation
                        //Using 'fgets' and 'printf' commands 3 times to retrieve all the information from the user file
                        
                        fgets(str2,100,ptr2);
                        printf("%s",str2);
                        fgets(str2,100,ptr2);
                        printf("%s",str2);
                        fgets(str2,100,ptr2);
                        printf("%s",str2);

                        //Taking input for the Withdraw Amount from the user
                        printf("\nEnter the Amount to be Withdrawn: ");
                        scanf("%d",&amt);
                        fputs("\nWITHDRAWING AMOUNT FROM ACCOUNT",ptr2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //If the amount to be withdrawn is greater than the Account Balance then it will show error as it will not be possible to withdraw such amount
                        if(amt>balance2)
                        {
                            
                            printf("\nError!\n");
                            printf("Insufficient Balance!\n");
                            printf("\nPlease Deposit more Money in your Bank Account to withdraw this amount\n");
                        }

                        //ATM Machines do not take values other than multiples of 100 as it only contains currency in that denomination only
                        else if(amt%100!=0)
                        {
                            
                            printf("\nError!\n");
                            printf("Please Enter the amount in the Multiples of 100\n");
                        }

                        //Finally, if all the conditions are met, the Amount is Withdrawn and the Withdrawn Amount gets reduced from the Account Balance
                        //The current balance is shown after reduction of withdrwn money
                        
                        else
                        {
                            
                            balance2=balance2-amt;
                            printf("\nAmount Withdrawn Successfully!\n");
                            printf("Please Collect your Cash from the Cash Dispenser\n");
                            printf("\nYour Current Account Balance is Rs%d\n",balance2);
                        }

                        fclose(ptr2);

                    }

                    //Condition if the the PIN is 003
                    else if(pin==003)
                    {
                        

                        //Following Commands are used to retrieve strings from the files using File Handling Operation
                        //Using 'fgets' and 'printf' commands 3 times to retrieve all the information from the user file
                        
                        fgets(str3,100,ptr3);
                        printf("%s",str3);
                        fgets(str3,100,ptr3);
                        printf("%s",str3);
                        fgets(str3,100,ptr3);
                        printf("%s",str3);

                        //Inputting the Withdraw Amount from the user
                        printf("\nEnter the Amount to be Withdrawn: ");
                        scanf("%d",&amt);
                        fputs("\nWITHDRAWING AMOUNT FROM ACCOUNT",ptr3);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }
                        //If the amount to be withdrawn is greater than the Account Balance then it will show error as it will not be possible to withdraw such amount
                        
                        
                        if(amt>balance3)
                        {
                            
                            printf("\nError!\n");
                            printf("Insufficient Balance!\n");
                            printf("\nPlease Deposit more Money in your Bank Account to withdraw this amount\n");
                        }

                        //ATM Machines do not take values other than multiples of 100 as it only contains currecy in that denomination only
                        else if(amt%100!=0)
                        {
                            
                            printf("\nError!\n");
                            printf("Please Enter the amount in the Multiples of 100\n");

                        }

                        //Finally, if all the conditions are met, the Amount is Withdrawn and the Withdrawn Amount gets reduced from the Account Balance
                        //The current balance is shown after reduction of withdrwn money
                        
                        else
                        {
                            
                            balance3=balance3-amt;
                            printf("\nAmount Withdrawn Successfully!\n");
                            printf("Please Collect your Cash from the Cash Dispenser\n");
                            printf("\nYour Current Account Balance is Rs%d\n",balance3);
                        }

                        fclose(ptr3);

                    }

                    //Condition if the the PIN is 004
                    else if(pin==004)
                    {

                        //Following Commands are used to retrieve strings from the files using File Handling Operation
                        //Using 'fgets' and 'printf' commands 3 times to retrieve all the information from the user file
                        
                        fgets(str4,100,ptr4);
                        printf("%s",str4);
                        fgets(str4,100,ptr4);
                        printf("%s",str4);
                        fgets(str4,100,ptr4);
                        printf("%s",str4);

                        //Inputting the Withdraw Amount from the user
                        
                        printf("\nEnter the Amount to be Withdrawn: ");
                        scanf("%d",&amt);
                        fputs("\nWITHDRAWING AMOUNT FROM ACCOUNT",ptr4);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }
                        //If the amount to be withdrawn is greater than the Account Balance then it will show error as it will not be possible to withdraw such amount
                        if(amt>balance4)
                        {
                            
                            printf("\nError!\n");
                            printf("Insufficient Balance!\n");
                            printf("\nPlease Deposit more Money in your Bank Account to withdraw this amount\n");
                        }

                        //ATM Machines do not take values other than multiples of 100 as it only contains currecy in that denomination only
                        else if(amt%100!=0)
                        {
                            printf("\nError!\n");
                            printf("Please Enter the amount in the Multiples of 100\n");

                        }

                        //Finally, if all the conditions are met, the Amount is Withdrawn and the Withdrawn Amount gets reduced from the Account Balance
                        //The current balance is shown after reduction of withdrwn money
                        
                        else
                        {
                            
                            balance4=balance4-amt;
                            printf("\nAmount Withdrawn Successfully!\n");
                            printf("Please Collect your Cash from the Cash Dispenser\n");
                            printf("\nYour Current Account Balance is Rs%d\n",balance4);
                        }

                        fclose(ptr4);

                    }

                    //Condition if the the PIN is 005
                    else if(pin==005)
                    {

                        //Following Commands are used to retrieve strings from the files using File Handling Operation
                        //Using 'fgets' and 'printf' commands 3 times to retrieve all the information from the user file
                        
                        fgets(str5,100,ptr5);
                        printf("%s",str5);
                        fgets(str5,100,ptr5);
                        printf("%s",str3);
                        fgets(str5,100,ptr5);
                        printf("%s",str5);

                        //Inputting the Withdraw Amount from the user
                        printf("\nEnter the Amount to be Withdrawn: ");
                        scanf("%d",&amt);
                        fputs("\nWITHDRAWING AMOUNT FROM ACCOUNT",ptr5);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //If the amount to be withdrawn is greater than the Account Balance then it will show error as it will not be possible to withdraw such amount
                        if(amt>balance5)
                        {
                            
                            printf("\nError!\n");
                            printf("Insufficient Balance!\n");
                            printf("\nPlease Deposit more Money in your Bank Account to withdraw this amount\n");
                        }

                        //ATM Machines do not take values other than multiples of 100 as it only contains currecy in that denomination only
                        else if(amt%100!=0)
                        {
                            printf("\nError!\n");
                            printf("Please Enter the amount in the Multiples of 100\n");

                        }

                        //Finally, if all the conditions are met, the Amount is Withdrawn and the Withdrawn Amount gets reduced from the Account Balance
                        //The current balance is shown after reduction of withdrwn money
                        
                        else
                        {
                            
                            balance5=balance5-amt;
                            printf("\nAmount Withdrawn Successfully!\n");
                            printf("Please Collect your Cash from the Cash Dispenser\n");
                            printf("\nYour Current Account Balance is Rs%d\n",balance5);
                        }

                        fclose(ptr5);
                    }

                    else if(pin==006)
                    {
                        
                        //Following Commands are used to retrieve strings from the files using File Handling Operation
                        //Using 'fgets' and 'printf' commands 3 times to retrieve all the information from the user file
                        
                        fgets(str6,100,ptr6);
                        printf("%s",str6);
                        fgets(str6,100,ptr6);
                        printf("%s",str6);
                        fgets(str6,100,ptr6);
                        printf("%s",str6);

                        //Taking input for the Withdraw Amount from the user
                        printf("\nEnter the Amount to be Withdrawn: ");
                        scanf("%d",&amt);
                        fputs("\nWITHDRAWING AMOUNT FROM ACCOUNT",ptr6);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //If the amount to be withdrawn is greater than the Account Balance then it will show error as it will not be possible to withdraw such amount
                        if(amt>balance6)
                        {
                            
                            printf("\nError!\n");
                            printf("Insufficient Balance!\n");
                            printf("\nPlease Deposit more Money in your Bank Account to withdraw this amount\n");
                        }

                        //ATM Machines do not take values other than multiples of 100 as it contains currency in that denomination only
                        else if(amt%100!=0)
                        {
                            printf("\nError!\n");
                            printf("Please Enter the amount in the Multiples of 100\n");
                        }

                        //Finally, if all the conditions are met, the Amount is Withdrawn and the Withdrawn Amount gets reduced from the Account Balance
                        //The current balance is shown after reduction of withdrwn money
                        
                        else
                        {
                            
                            balance6=balance6-amt;
                            printf("\nAmount Withdrawn Successfully!\n");
                            printf("Please Collect your Cash from the Cash Dispenser\n");
                            printf("\nYour Current Account Balance is Rs%d\n",balance6);
                        }

                        fclose(ptr6);
                    }

                    //Else statement in case the user enters any other value
                    else
                    {
                        
                        printf("\nINVALID ARGUMENT!\n");
                        printf("Please Enter the Correct Amount\n");
                        printf("\n");

                    }

                    //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                    while(i<900000000)
                    {
                        i++;
                    }

                    //To perform any other task by the user
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");
                    printf("\nDo you want to Perform any other Tasks?");
                    printf("\nFor Yes - PRESS 1");
                    printf("\nFor No - PRESS 2");
                    printf("\n\nPlease Enter the Command: ");
                    scanf("%d",&gotog);
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");

                    //Condition to check if the user entered YES or NO
                    if(gotog==1)
                    {
                        //Going to the main menu if the user entered YES
                        goto g;
                    }
                    else
                    {
                        //Breaking out of the loop and exiting if the user entered NO
                        break;
                    }

                }


                //Case 2 is to check current account balance of the account
                //CHECK BALANCE//
                case 2:
                {

                    //Condition if the the PIN is 001
                    if(pin==001)
                    {

                        //Opening the file containing the details of user with PIN 001 using File Handling Operations
                        ptr1=fopen("file1.txt","a+");
                        fputs("\nCHECKING CURRENT ACCOUNT BALANCE",ptr1);

                        //Following Commands are used to retrieve strings from the files containing data using File Handling Operation
                        
                        fgets(str1,100,ptr1);
                        printf("%s",str1);
                        fgets(str1,100,ptr1);
                        printf("%s",str1);
                        fgets(str1,100,ptr1);
                        printf("%s",str1);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }
                        //Printing the value stored in variable balance1 to display account balance of user with PIN 001
                        printf("\nYOUR CURRENT ACCOUNT BALANCE IS = %d",balance1);
                        fclose(ptr1);

                    }

                    //Condition if the the PIN is 002
                    else if(pin==002)
                    {

                        //Opening the file containing the details of user with PIN 002 using File Handling Operations
                        ptr2=fopen("file2.txt","a+");
                        fputs("\nCHECKING CURRENT ACCOUNT BALANCE",ptr2);

                        //Following Commands are used to retrieve strings from the files containing data using File Handling Operation
                        fgets(str2,100,ptr2);
                        printf("%s",str2);
                        fgets(str2,100,ptr2);
                        printf("%s",str2);
                        fgets(str2,100,ptr2);
                        printf("%s",str2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Printing the value stored in variable balance2 to display account balance of user with PIN 002
                        printf("\nYOUR CURRENT ACCOUNT BALANCE IS = %d",balance2);
                        fclose(ptr2);

                    }

                    //Condition if the the PIN is 003
                    else if(pin==003)
                    {

                        //Opening the file containing the details of user with PIN 003 using File Handling Operations
                        ptr3=fopen("file3.txt","a+");
                        fputs("\nCHECKING CURRENT ACCOUNT BALANCE",ptr3);

                        //Following Commands are used to retrieve strings from the files containing data using File Handling Operation
                        
                        fgets(str3,100,ptr3);
                        printf("%s",str3);
                        fgets(str3,100,ptr3);
                        printf("%s",str3);
                        fgets(str3,100,ptr3);
                        printf("%s",str3);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Printing the value stored in variable balance3 to display account balance of user with PIN 003
                        printf("\nYOUR CURRENT ACCOUNT BALANCE IS = %d",balance3);
                        fclose(ptr3);

                    }

                    //Condition if the the PIN is 004
                    else if(pin==004)
                    {
                        
                        //Opening the file containing the details of user with PIN 003 using File Handling Operations
                        ptr4=fopen("file4.txt","a+");
                        fputs("\nCHECKING CURRENT ACCOUNT BALANCE",ptr4);

                        //Following Commands are used to retrieve strings from the files containing data using File Handling Operation
                        
                        fgets(str4,100,ptr4);
                        printf("%s",str4);
                        fgets(str4,100,ptr4);
                        printf("%s",str4);
                        fgets(str4,100,ptr4);
                        printf("%s",str4);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Printing the value stored in variable balance3 to display account balance of user with PIN 003
                        printf("\nYOUR CURRENT ACCOUNT BALANCE IS = %d",balance4);
                        fclose(ptr4);

                    }

                    //Condition if the the PIN is 005
                    else if(pin==005)
                    {
                        
                        //Opening the file containing the details of user with PIN 003 using File Handling Operations
                        ptr5=fopen("file5.txt","a+");
                        fputs("\nCHECKING CURRENT ACCOUNT BALANCE",ptr5);

                        //Following Commands are used to retrieve strings from the files containing data using File Handling Operation
                        
                        fgets(str5,100,ptr5);
                        printf("%s",str5);
                        fgets(str5,100,ptr5);
                        printf("%s",str5);
                        fgets(str5,100,ptr5);
                        printf("%s",str5);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Printing the value stored in variable balance3 to display account balance of user with PIN 003
                        printf("\nYOUR CURRENT ACCOUNT BALANCE IS = %d",balance5);
                        fclose(ptr5);
                    }
                    else if(pin==006)
                    {
                        
                        //Opening the file containing the details of user with PIN 001 using File Handling Operations
                        ptr6=fopen("file1.txt","a+");
                        fputs("\nCHECKING CURRENT ACCOUNT BALANCE",ptr6);

                        //Following Commands are used to retrieve strings from the files containing data using File Handling Operation
                        
                        fgets(str6,100,ptr6);
                        printf("%s",str6);
                        fgets(str6,100,ptr6);
                        printf("%s",str6);
                        fgets(str6,100,ptr6);
                        printf("%s",str6);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Printing the value stored in variable balance1 to display account balance of user with PIN 001
                        printf("\nYOUR CURRENT ACCOUNT BALANCE IS = %d",balance6);
                        fclose(ptr6);
                    }

                    //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                    while(i<900000000)
                    {
                        i++;
                    }

                    //To perform any other task by the user                    
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");
                    printf("\nDo you want to Perform any other Tasks?");
                    printf("\nFor Yes - PRESS 1");
                    printf("\nFor No - PRESS 2");
                    printf("\n\nPlease Enter the Command: ");
                    scanf("%d",&gotog);
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");

                    //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                    while(i<900000000)
                    {
                        i++;
                    }

                    //Condition to check if the user entered YES or NO
                    if(gotog==1)
                    {
                        //Going to the main menu if the user entered YES
                        goto g;
                    }
                    else
                    {
                        //Breaking out of the loop and exiting if the user entered NO
                        break;
                    }
                }


                //Case 3 is to change the PIN of the account
                //CHANGE PIN//
                case 3:
                {

                    //Taking input the current PIN from User
                    printf("Enter Current PIN:\n");
                    scanf("%d",&cpin);

                    //Condition if the the PIN is 001
                    if(cpin==pin)
                     {
                         
                        fgets(str1,100,ptr1);
                        printf("%s",str1);
                        fgets(str1,100,ptr1);
                        printf("%s",str1);
                        fgets(str1,100,ptr1);
                        printf("%s",str1);

                        //Opening the file containing the details of user with PIN 001 using File Handling Operations
                        ptr1=fopen("file1.txt","a+");
                        fputs("\nCHANGING CURRENT PIN",ptr1);

                        //Taking new PIN as input from the user
                        printf("Enter New PIN: \n");
                        scanf("%d",&npin1);

                        //Taking new PIN as input again from the user for confirmation
                        here1:
                        printf("\nEnter the New PIN again: \n");
                        scanf("%d",&npin2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Condition to see if the confirmation process was successful
                        if(npin1==npin2)
                        {
                            while(i<900000000)
                            {
                                i++;
                            }
                            //Opening the file containing the details of user with PIN 001 using File Handling Operation to check the new PIN
                            ptr1=fopen("file1.txt","a+");
                            fputs("\nLOGIN PIN HAS BEEN CHANGED FOR THE ACCOUNT",ptr1);
                            printf("\nYour PIN has been changed.");

                            //Printing the New PIN one last time for the user to remember
                            printf("\n\n%d is your New PIN.",npin2);

                        }

                        //Condition if the confirmation process was unsuccessful
                        else
                        {
                            
                            printf("New PIN did not match in the second time.\n");
                            printf("Please enter again.");
                            goto here1;
                        }
                        fclose(ptr1);

                    }

                    //Condition if the the PIN is 002
                    else if(cpin==pin)
                    {
                        
                        fgets(str2,100,ptr2);
                        printf("%s",str2);
                        fgets(str2,100,ptr2);
                        printf("%s",str5);
                        fgets(str2,100,ptr2);
                        printf("%s",str2);

                        //Opening the file containing the details of user with PIN 002 using File Handling Operations
                        ptr2=fopen("file2.txt","a+");
                        fputs("\nCHANGING CURRENT PIN",ptr2);

                        //Taking new PIN as input from the user
                        printf("Enter New PIN: \n");
                        scanf("%d",&npin1);

                        //Taking new PIN as input again from the user for confirmation
                        here2:
                        printf("\nEnter the New PIN again: \n");
                        scanf("%d",&npin2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }
                        
                        //Condition to see if the confirmation process was successful
                        if(npin1==npin2)
                        {
                            //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                            //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                            while(i<900000000)
                            {
                                i++;
                            }
                            
                            //Opening the file containing the details of user with PIN 002 using File Handling Operation to check the new PIN
                            ptr2=fopen("file2.txt","a+");
                            fputs("\nLOGIN PIN CHANGED FOR THE ACCOUNT",ptr2);
                            printf("Your PIN has been changed.");

                            //Printing the New PIN one last time for the user to remember
                            printf("\n\n%d is your New PIN.",npin2);

                        }

                        //Condition if the confirmation process was unsuccessful
                        else
                        {
                            printf("New PIN did not match in the second time.\n");
                            printf("Please enter again.");
                            goto here2;
                        }
                        fclose(ptr2);

                    }

                    //Condition if the the PIN is 003
                    else if(cpin==pin)
                    {
                        
                        fgets(str3,100,ptr3);
                        printf("%s",str3);
                        fgets(str3,100,ptr3);
                        printf("%s",str3);
                        fgets(str3,100,ptr3);
                        printf("%s",str3);

                        //Opening the file containing the details of user with PIN 003 using File Handling Operations
                        ptr3=fopen("file3.txt","a+");
                        fputs("\nCHANGING CURRENT PIN",ptr3);

                        //Taking new PIN as input from the user
                        printf("Enter New PIN: \n");
                        scanf("%d",&npin1);

                        //Taking new PIN as input again from the user for confirmation
                        here3:
                        printf("\nEnter the New PIN again: \n");
                        scanf("%d",&npin2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Condition to see if the confirmation process was successful
                        if(npin1==npin2)
                        {
                            //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                            //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                            while(i<900000000)
                            {
                                i++;
                            }
                            
                            //Opening the file containing the details of user with PIN 003 using File Handling Operation to check the new PIN
                            ptr3=fopen("file3.txt","a");
                            fputs("\nLOGIN PIN CHANGED FOR THE ACCOUNT",ptr3);
                            printf("Your PIN has been changed.");

                            //Printing the New PIN one last time for the user to remember
                            printf("\n%d is your New PIN.",npin2);
                            fclose(ptr3);

                        }

                        //Condition if the confirmation process was unsuccessful
                        else
                        {
                            printf("New PIN did not match in the second time.\n");
                            printf("Please enter again.");
                            goto here3;
                        }
                    }

                    //Condition if the the PIN is 004
                    else if(cpin==pin)
                    {
                        
                        fgets(str4,100,ptr4);
                        printf("%s",str4);
                        fgets(str4,100,ptr4);
                        printf("%s",str4);
                        fgets(str4,100,ptr4);
                        printf("%s",str4);

                        //Opening the file containing the details of user with PIN 004 using File Handling Operations
                        ptr4=fopen("file4.txt","a+");
                        fputs("\nCHANGING CURRENT PIN",ptr4);

                        //Taking new PIN as input from the user
                        printf("Enter New PIN: \n");
                        scanf("%d",&npin1);

                        //Taking new PIN as input again from the user for confirmation
                        here4:
                        printf("\nEnter the New PIN again: \n");
                        scanf("%d",&npin2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Condition to see if the confirmation process was successful
                        if(npin1==npin2)
                        {
                            //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                            //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                            while(i<900000000)
                            {
                                i++;
                            }

                            //Opening the file containing the details of user with PIN 004 using File Handling Operation to check the new PIN
                            ptr3=fopen("file3.txt","a");
                            fputs("\nLOGIN PIN CHANGED FOR THE ACCOUNT",ptr4);
                            printf("Your PIN has been changed.");

                            //Printing the New PIN one last time for the user to remember
                            printf("\n%d is your New PIN.",npin2);
                            fclose(ptr4);
                        }

                        //Condition if the confirmation process was unsuccessful
                        else
                        {
                            printf("New PIN did not match in the second time.\n");
                            printf("Please enter again.");
                            goto here4;
                        }
                    }

                    //Condition if the the PIN is 005
                    else if(cpin==pin)
                    {
                        
                        fgets(str5,100,ptr5);
                        printf("%s",str5);
                        fgets(str5,100,ptr5);
                        printf("%s",str5);
                        fgets(str5,100,ptr5);
                        printf("%s",str5);

                        //Opening the file containing the details of user with PIN 005 using File Handling Operations
                        ptr5=fopen("file5.txt","a+");
                        fputs("\nCHANGING CURRENT PIN",ptr5);

                        //Taking new PIN as input from the user
                        printf("Enter New PIN: \n");
                        scanf("%d",&npin1);

                        //Taking new PIN as input again from the user for confirmation
                        here5:
                        printf("\nEnter the New PIN again: \n");
                        scanf("%d",&npin2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Condition to see if the confirmation process was successful
                        if(npin1==npin2)
                        {
                            //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                            //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                            while(i<900000000)
                            {
                                i++;
                            }

                            //Opening the file containing the details of user with PIN 005 using File Handling Operation to check the new PIN
                            ptr5=fopen("file5.txt","a");
                            fputs("\nLOGIN PIN CHANGED FOR THE ACCOUNT",ptr5);
                            printf("Your PIN has been changed.");

                            //Printing the New PIN one last time for the user to remember
                            printf("\n%d is your New PIN.",npin2);
                            fclose(ptr5);

                        }

                        //Condition if the confirmation process was unsuccessful
                        else
                        {
                            printf("New PIN did not match in the second time.\n");
                            printf("Please enter again.");
                            goto here5;
                        }
                    }
                    else if(cpin==pin)
                    {
                        
                        fgets(str6,100,ptr6);
                        printf("%s",str6);
                        fgets(str6,100,ptr6);
                        printf("%s",str6);
                        fgets(str6,100,ptr6);
                        printf("%s",str6);

                        //Opening the file containing the details of user with PIN 005 using File Handling Operations
                        ptr6=fopen("file6.txt","a+");
                        fputs("\nCHANGING CURRENT PIN",ptr6);

                        //Taking new PIN as input from the user
                        printf("Enter New PIN: \n");
                        scanf("%d",&npin1);

                        //Taking new PIN as input again from the user for confirmation
                        here6:
                        printf("\nEnter the New PIN again: \n");
                        scanf("%d",&npin2);

                        //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                        //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                        while(i<900000000)
                        {
                            i++;
                        }

                        //Condition to see if the confirmation process was successful
                        if(npin1==npin2)
                        {
                            //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                            //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                            while(i<900000000)
                            {
                                i++;
                            }

                            //Opening the file containing the details of user with PIN 005 using File Handling Operation to check the new PIN
                            ptr6=fopen("file6.txt","a");
                            fputs("\nLOGIN PIN CHANGED FOR THE ACCOUNT",ptr6);
                            printf("Your PIN has been changed.");

                            //Printing the New PIN one last time for the user to remember
                            printf("\n%d is your New PIN.",npin2);
                            fclose(ptr6);

                        }

                        //Condition if the confirmation process was unsuccessful
                        else
                        {
                            printf("New PIN did not match in the second time.\n");
                            printf("Please enter again.");
                            goto here6;
                        }
                    }
                    
                    
                    //To perform any other task by the user
                    while(i<900000000)
                    {
                        i++;
                    }
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");
                    printf("\nDo you want to Perform any other Tasks?");
                    printf("\nFor Yes - PRESS 1");
                    printf("\nFor No - PRESS 2");
                    printf("\n\nPlease Enter the Command: ");
                    scanf("%d",&gotog);
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");

                    //Condition to check if the user entered YES or NO
                    if(gotog==1)
                    {
                        //Going to the main menu if the user entered YES
                        goto g;
                    }
                    else
                    {
                        //Breaking out of the loop and exiting if the user entered NO
                        break;
                    }

                }


                //Case 4 is to Update the Passbook of the account
                //UPDATE PASSBOOK//
                case 4:
                {
                    
                    printf("\nINSERT PASSBOOK\n");
                    printf("\nCONNECTION WITH THE SERVER IS BEING ESTABLISHED.......");

                    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                    while(i<90000000)
                    {
                        i++;
                    }

                    //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                    printf("\nFETCHING USER DETAILS.......");

                    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                    while(i<900000000)
                    {
                        i++;
                    }

                    //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes while
                    printf("\nPRINTING TRANSACTION DETAILS.......\n");
                    
                    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                    while(i<900000000)
                    {
                        i++;
                    }

                    printf("\nPASSBOOK ENTRY SUCCESSFULL!");
                    printf("\nREMOVE PASSBOOK");
                    {

                        //Condition if the the PIN is 001
                        if(pin==001)
                        {

                            //Finally Printing the confirmation on the completion of the Process
                            fputs("\nPASSBOOK UPDATED ",ptr1);
                        }

                        //Condition if the the PIN is 002
                        else if(pin==002)
                        {
                            //Finally Printing the confirmation on the completion of the Process
                            fputs("\nPASSBOOK UPDATED ",ptr2);
                        }

                        //Condition if the the PIN is 003
                        else if(pin==003)
                        {
                            //Finally Printing the confirmation on the completion of the Process
                            fputs("\nPASSBOOK UPDATED ",ptr3);
                        }

                        //Condition if the the PIN is 004
                        else if(pin==004)
                        {
                            //Finally Printing the confirmation on the completion of the Process
                            fputs("\nPASSBOOK UPDATED ",ptr4);
                        }

                        //Condition if the the PIN is 005
                        else if(pin==005)
                        {
                            //Finally Printing the confirmation on the completion of the Process
                            fputs("\nPASSBOOK UPDATED ",ptr5);
                        }
                        else if(pin==006)
                        {
                            //Finally Printing the confirmation on the completion of the Process
                            fputs("\nPASSBOOK UPDATED ",ptr6);
                        }
                    }

                    //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
                    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
                    while(i<900000000)
                    {
                        i++;
                    }

                    //To perform any other task by the user
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");
                    printf("\nDo you want to Perform any other Tasks?");
                    printf("\nFor Yes - PRESS 1");
                    printf("\nFor No - PRESS 2");
                    printf("\n\nPlease Enter the Command: ");
                    scanf("%d",&gotog);
                    printf("\n************************************************************************");
                    printf("\n************************************************************************");

                    //Condition to check if the user entered YES or NO
                    if(gotog==1)
                    {
                        //Going to the main menu if the user entered YES
                        goto g;
                    }
                    else
                    {
                        //Breaking out of the loop and exiting if the user entered NO
                        break;
                    }

                }
            }
            //If pin was found correct then it will make the program run out of loop
            pinloop=pinloop+3;

        }

        //Condition if Loop entered was wrong
        else
        {
            
            //Iterating the 'Enter Pin' for limited 2 times for the user
            if(pinloop<2)
            {
                printf("\nPlease Enter the CORRECT PIN Again!");
                pinloop=pinloop+1;
            }

            //If the user exceeds the limit the 'Enter Pin' loop breaks and the user exits the program
            else
            {

                printf("\nSorry!You have exceeded the limit.....");
                printf("\nYour account has been locked. It will be reactived after 24 hours.");
                //pinloop+3 will make the control exit the loop
                pinloop=pinloop+3;
            }

        }
    }

    //Deliberately increasing the process time so as to replicate the amount of time the real ATM machine takes
    //Putting 'i' in while loop with range 90000000 so as to replicate the amount of time the real ATM machine takes
    while(i<900000000)
    {
        i++;
    }

    //End statement of the program
    printf("\nThank you for using our Services!");
    printf("\nPlease visit us again.....");
    printf("\nHope you liked it! =D");

    return 0;
}
//The Program ends here.





