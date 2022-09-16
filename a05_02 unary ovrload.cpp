/*C++ program to overload unary operators that is increment and decrement.*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, img;
    public:
        void operator++(int dummy)
        {
            real+=1;
            img+=1;
        }
        void operator++()
        {
            real+=1;
            img+=1;
        }
        void setnum(int x, int y)
        {
            real=x;
            img=y;
        }
        void operator--(int dummy)
        {
            real-=1;
            img-=1;
        }
        void operator--()
        {
            real-=1;
            img-=1;
        }
        void displaynum()
        {
            if(img<0)
                cout<<real<<" - "<<img*(-1)<<"i ";
            else
                cout<<real<<" + "<<img<<"i ";
        }

};


int main()
{
    Complex c1, c2;
    c1.setnum(5,8);
    c2.setnum(9,6);
    c1.displaynum();
    cout<<endl;
    ++c1;
    c1++;
    c1.displaynum();
    cout<<endl;
    c2.displaynum();
    cout<<endl;
    --c2;
    c2--;
    c2--;
    c2--;
    c2--;
    c2--;
    c2--;
    c2.displaynum();
    cout<<endl;
}
