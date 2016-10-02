#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <bits/stdc++.h>
#include "Date.h"
#include "Account.h"
using namespace std;
class Account
{
private:
    string AccountName;
    int AccountID;
    double AccountBalance;
    Date AccountDate;
public:
    Account();
    Account(string Name,int ID,double Balance);
    double Deposit(double Money);
    double Withdraw(double Money);
    void View();
    void SetAccountName(string Name);
    void SetAccountID(int ID);
    void SetAccountBalance(double Balance);
    void SetAccountDate(int day,int month,int year);
    string GetAccountName();
    int GetAccountID();
    double GetAccountBalance();

};

#endif // ACCOUNT_H
