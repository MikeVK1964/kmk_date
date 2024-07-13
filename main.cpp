#include <iostream>
#include "time1.h"

using namespace std;

int main()
{
////    cout << "Hello World!" << endl;
    Time1 tm1;
    tm1.SetTime(10,34,120);
    tm1.PrintMilitary();
    return 0;
}
