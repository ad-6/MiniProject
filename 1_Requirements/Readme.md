# Requirements
## Introduction
 * The Bank Administration system helps in the instant creation and updation of an account without any hassle. 
 * This topic was chosen to implement various C programming methods including structures,pointers,header files and multiple file programming concepts.

## Research
### Bank Administration System Software
Several small and new banking and chit-fund services lack software infrastuture to keep a track of customer accounts. This is because such software are quite costly and cannot be afforded by these new/develoing services. This software will help them to overcome this issue and help them accurately store and edit all the data whenever required.  

### Benefits
This software makes it easier for bank adminstrator as well as the customer to instantly create an account as long as all the valid information is available. They can even edit the existing account incase of any change or discrapancy of information. Moreover individual accounts transactions can be tracked. The software makes it easy to view all acounts at once too.

## System Defination
### Assumptions:
* Few assumptions the system makes are: 
    * No joint account or linking of accounts
    * Entered details are correct
    * Deleted record need not be recovered
![Description](https:)
### Explanation:
* Bank Administration system software includes features like:
    * Creating a new account
    * Update existing account 
    * Read transactions details of an account
    * View all records
    * Save record to file
    * Read record from file 

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/ad-6/MiniProject/blob/main/1_Requirements/SWOT_Analysis.png)

# 4W&#39;s and 1&#39;H

## Who:
* Small and new banks/chit-funds can utilise this software to maintain customer accounts.

## What:
* Banks/Chit-funds unable to compete with established services and incurred losses.

## When:
* Tremendously growing competition among various banking/chit-funds services.

## Where:
* This problem faced by all small and new banks/chit-funds. 

## How:
* Causes huge losses and ultimately shut down of these small banks/chit-funds services. 

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to create an new account| Technical | IMPLEMENTED | 
| HR02 | User shall be able to update an existing account | Technial |  IMPLEMENTED  |
| HR03 | User shall be able to read an account for transaction details| Technical |  IMPLEMENTED  |
| HR04 | User shall be able to view all accounts | Technical |  IMPLEMENTED  |
| HR05 | User shall be able to delete an account | Technical |  IMPLEMENTED  |
| HR06 | User shall be able to save records in a file | Technical |  IMPLEMENTED  |
| HR07 | User shall be able to read data from a file | Technical |  IMPLEMENTED  |
| HR08 | User can EXIT the menu |Technical| IMPLEMENTED  |
| HR09 | User can link accounts| Scenario| FUTURE |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 |New record shall be created after all the following information is provided :Account ID, Name, Date of Birth, Age, Address, Phone number, Account type and Amount to be deposited. The account shall be created if Account ID is unique | HR01 |  IMPLEMENTED  |
| LR02 | Updation shall be done by Account ID, if no such record is available then "No Record Found" Message should be displayed | HR02 |  IMPLEMENTED  |
| LR03 | Reading account data should be possible in 2 ways (1) By Account ID (2) By Name | HR03 |  IMPLEMENTED |
| LR04 | All the accounts in the sytem can be viewed by selecting the required option in main menu| HR04 |  IMPLEMENTED  |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02, HR03|  IMPLEMENTED  |
| LR06 | Deletion of records is done by Account ID, if no such record is available then "No Record Found" Message should be displayed | HR05 |  IMPLEMENTED  |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR06 |  IMPLEMENTED  |
| LR06 | If opening the file fails, then the system shoulfd prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR09|  IMPLEMENTED  |
| LR07 | To EXIT the system, required option in main menu needs to be selected | HR08|  IMPLEMENTED  |
