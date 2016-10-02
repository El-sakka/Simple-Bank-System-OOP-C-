#include "Account.h"
#include <bits/stdc++.h>
using namespace std;
Account::Account()
{
    string AccountName="NO NAME";
    int AccountID = 0;
    double AccountBalance= 0.0;
    //Date AccountDate="0/0/0";
}
Account::Account(string Name,int ID,double Balance){
    string AccountName = Name;
    int AccountID = ID;
    double AccountBalance = Balance ;
}
void Account::SetAccountName(string Name){
    AccountName = Name;
}
void Account::SetAccountBalance(double Balance){
    AccountBalance = Balance;
}
void Account::SetAccountID(int ID){
    AccountID = ID;
}
void Account::SetAccountDate(int day ,int month,int year){
    AccountDate.SetDay(day);
    AccountDate.SetMonth(month);
    AccountDate.SetYear(year);
}
string Account ::GetAccountName(){
    return AccountName;
}
int Account ::GetAccountID(){
    return  AccountID;
}
double Account ::GetAccountBalance(){
    return AccountBalance;
}

