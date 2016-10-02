#include "Date.h"
#include <bits/stdc++.h>
using namespace std;

Date::Date()
{
    Day = 0;
    Month = 0;
    Year = 0;
}
Date::Date(int IDay,int IMonth,int IYear){
    Day = IDay;
    Month= IMonth;
    Year = IYear;
}
Date::Date(string IDate){
    string EmptStr ="";
    stringstream ObjConv; // her to convert from string to integer
    int var,counter = 1; // to set the variables into the day and month and year & counter to divide the string into 3 parts
    for(int i=0;i<IDate.size();i++){
        if(IDate[i]!= '/')
        {
            EmptStr+=IDate[i];
        }
        if(IDate[i]=='/' || i==IDate.size()-1){
            ObjConv << EmptStr;
            ObjConv >> var;
            ObjConv.clear();
            EmptStr="";
            if(counter == 1)
                Day = var;
            else if(counter ==2)
                Month = var;
            else
                Year = var;
            counter ++;
        }
    }
}
void Date::DisplayDate(){
    cout<<Day<<"/" <<Month<<"/"<<Year<<endl;
}
void Date::SetDay(int IDay){
    Day = IDay;
}
void Date::SetMonth(int IMonth){
    Month = IMonth;
}
void Date::SetYear(int IYear){
    Year = IYear;
}
int Date::GetDay(){
    return Day;
}
int Date::GetMonth(){
    return Month;
}
int Date::GetYear(){
    return Year;
}
