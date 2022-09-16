/*class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.*/

#include<iostream>
using namespace std;

class fraction
{
    private:
        long numerator, denominator;
    public:
        friend void operator>>(fraction dummy, fraction &f);
        friend void operator<<(fraction dummy, fraction f);
        fraction operator++()
        {
            fraction t;
            numerator= numerator+1;
            denominator= denominator+1;
            t.numerator=numerator;
            t.denominator=denominator;
            return t;
        }
        fraction operator++(int dummy)
        {
            fraction temp;
            temp.numerator= numerator;
            temp.denominator= denominator;
            numerator= numerator+1;
            denominator= denominator+1;
            return temp;
        }
        fraction operator--()
        {
            fraction temp;
            numerator= numerator-1;
            denominator= denominator-1;
            temp.numerator= numerator;
            temp.denominator= denominator;
            return temp;
        }
        fraction operator--(int dummy)
        {
            fraction temp;
            temp.numerator= numerator;
            temp.denominator= denominator;
            numerator= numerator-1;
            denominator= denominator-1;
            return temp;
        }
};

void operator>>(fraction dummy,fraction &f)
{
    cout<<"Numerator   : ";
    cin>>f.numerator;
    cout<<"Denominator : ";
    cin>>f.denominator;
}

void operator<<(fraction dummy, fraction f)
{
    cout<<f.numerator<<"/"<<f.denominator<<endl;
}

int main()
{
    fraction f1, f2, fractionin, fractionout;
    cout<<"Enter 1st fraction value.\n";
    fractionin>>f1;
    f1++;
    cout<<"f1++  : ";
    fractionout<<f1;
    ++f1;
    cout<<"++f1  : ";
    fractionout<<f1;
    cout<<"Enter 2nd fraction value.\n";
    fractionin>>f2;
    cout<<"f2 = ++f1\n";
    f2= ++f1;
    cout<<"f1    : ";
    fractionout<<f1;
    cout<<"f2    : ";
    fractionout<<f2;
    cout<<"f2 = f1++\n";
    f2 = f1++;
    cout<<"f1    : ";
    fractionout<<f1;
    cout<<"f2    : ";
    fractionout<<f2;


}
