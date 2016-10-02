#ifndef DATE_H
#define DATE_H
#include "Date.h"
#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
    int Day,Month,Year;
public:
    Date();
    Date(string IDate);
    Date(int IDay,int IMonth,int IYear);
    void SetDay(int IDay);
    void SetMonth(int IMonth);
    void SetYear(int IYear);
    void DisplayDate();
    int GetDay();
    int GetMonth();
    int GetYear();
};

#endif // DATE_H
