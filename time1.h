#ifndef TIME_H
#define TIME_H


class Time1
{
public:
    Time1();
    void SetTime(int h,int m,int s);
    void PrintMilitary();
private:
    int hour=0;
    int minute=0;
    int second=0;
};

#endif // TIME_H
