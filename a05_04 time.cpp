/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/

#include<iostream>
using namespace std;

class Time
{
    private:
        int hours, minutes, seconds;
    public:
        void operator>>(Time &t)
        {
            cout<<"Enter hours   : ";
            cin>>t.hours;
            cout<<"Enter minutes : ";
            cin>>t.minutes;
            cout<<"Enter seconds : ";
            cin>>t.seconds;
            cout<<"\n";
        }
        friend void operator<<(Time , Time);       //defined in line 41
        int operator==(Time t2);                   //defined in line 33.

};

int Time::operator==(Time t2)
{
    if(hours==t2.hours && minutes==t2.minutes && seconds==t2.seconds)
        return 1;
    else
        return 0;
}

void operator<<(Time dummy, Time t)
{
    cout<<t.hours<<":"<<t.minutes<<":"<<t.seconds<<"\n\n";
}



int main()
{
    Time time;
    Time f, s;
    cout<<"Enter first time\n";
    time>>f;
    cout<<"First time - ";time<<f;
    cout<<"Enter second time\n";
    time>>s;
    cout<<"First time - ";time<<s;
    if(f==s)
        cout<<"Time is same\n";
    else
        cout<<"Time is not same\n";

}
