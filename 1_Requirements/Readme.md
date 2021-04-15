# Requirements
## Introduction
 * The Bank Administration system helps in the instant creation and updation of an account without any hassle. 
 * This topic was chosen to implement various C programming methods including structures,pointers,header files and multiple file programming concepts.

## Research
### Bank Administration System Software
Several small and new banking and chit-fund services lack software infrastruture to keep a track of customer accounts. This is because such software are quite costly and cannot be afforded by these new/developing services. This software will help them to overcome this issue and help them accurately store and edit all the data whenever required.  

### Benefits
This software makes it easier for bank adminstrator as well as the customer to instantly create an account as long as all the valid information is available. They can even edit the existing account incase of any change or discrapancy of information. Moreover individual accounts information and interests earned can be tracked. The software makes it easy to view all acounts at once too.

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
    * Update an existing account 
    * Read details of an account
    * Delete an existing account
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
* Probalme faced by all small and new banks/chit-funds. 

## How:
* Causes huge losses and ultimately leads to the shut down of these small banks/chit-funds services. 

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| H1 | User shall be able to create an new account| Technical | IMPLEMENTED | 
| H2 | User shall be able to update an existing account | Technial |  IMPLEMENTED  |
| H3 | User shall be able to read an account for interest details| Technical |  IMPLEMENTED  |
| H4 | User shall be able to view all accounts | Technical |  IMPLEMENTED  |
| H5 | User shall be able to delete an account | Technical |  IMPLEMENTED  |
| H6 | User shall be able to save records in a file | Technical |  IMPLEMENTED  |
| H7 | User shall be able to read data from a file | Technical |  IMPLEMENTED  |
| H8 | User can EXIT the menu |Technical| IMPLEMENTED  |
| H9 | User shall be to get instant inforamtion of all transactions made| Technical| FUTURE |
| H10 | User can link accounts| Technical| FUTURE |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| L1 |New record shall be created after all the following information is provided :Account ID, Name, Date of Birth, Age, Address, Phone number, Account type and Amount to be deposited. The account shall be created if Account ID is unique | H1 |  IMPLEMENTED  |
| L2 | Updation shall be done by Account ID, if no such record is available then "No Record Found" Message should be displayed | H2 |  IMPLEMENTED  |
| L3 | Reading account data should be possible in 2 ways (1) By Account ID (2) By Name | H3 |  IMPLEMENTED |
| L4 | All the accounts in the sytem can be viewed by selecting the required option in main menu| H4 |  IMPLEMENTED  |
| L5 | If user searches for an invalid ID "No Record Found" message should be displayed | H2, H3|  IMPLEMENTED  |
| L6 | Deletion of records is done by Account ID, if no such record is available then "No Record Found" Message should be displayed | H5 |  IMPLEMENTED  |
| L7 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | H6 |  IMPLEMENTED  |
| L8 | If opening the file fails, then the system shoulfd prompt the message "Unable to access file" and should not end the program execution | H5, H6, H7, H9|  IMPLEMENTED  |
| L9 | To EXIT the system, required option in main menu needs to be selected | H8|  IMPLEMENTED  |
| L10 | Transaction history should be available to the user when they view the account| H9|  FUTURE  |
