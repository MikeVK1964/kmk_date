#include <iostream>

#include "time1.h"

Time1::Time1()
{
    hour= minute=second=0;

}

void Time1::SetTime(int h,int m,int s)
{
    hour=(0<=h && h<24)? h:0;
    second=(s>=0 && s<60)? s:0;

    minute=(0<=m && m<60)? m:0;
///    second=(0<=s && s<60)?:s,0;

}

void Time1::PrintMilitary()
{
    std::cout << (10<=hour ? "":"0") << hour<<":"
     << (10<=minute ? "":"0") << minute<<":"
     << (10<=second ? "":"0") << second;

}
