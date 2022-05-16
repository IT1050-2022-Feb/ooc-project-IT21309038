#pragma once 
#include <iostream> 
#include <string> 
#include "Details.h" 
#include "IT_Staff.h" 
using namespace std;

class Account : public Details {
private:
    int accountNo;
    string userName;
    string password;
    string createDate;
    ITStaff* staff;
    string sid;
public:
    Account()
    {
        cout << "Constructor is running" << endl;
    }
    void setDetails(string pname, int regno, string mail, int no, string uname, string psd, string date)
    {
        name = pname;
        registerNo = regno;
        email = mail;
        accountNo = no;
        userName = uname;
        password = psd;
        createDate = date;
    }
    void displayAccDetails()
    {
        cout << "***************************************************" << endl;
        cout << "Your Details are given below.." << endl;
        cout << "Name :" << name << endl;
        cout << "Register number :" << registerNo << endl;
        cout << "Email ID :" << email << endl;
        cout << "Account number :" << accountNo << endl;
        cout << "User Name :" << userName << endl;
        cout << "Password :" << password << endl;
        cout << "Created Date :" << createDate << endl;
        cout << "**************************************************" << endl;
    }
    ~Account()
    {
        cout << "Running Deconstructor" << endl;
    }

};
