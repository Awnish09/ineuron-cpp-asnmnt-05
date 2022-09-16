/*C++ program to add two complex numbers using operator overloaded by a
friend function.*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, img;
    public:

        void setnum(int x, int y)
        {
            real=x;
            img=y;
        }
        void displaynum()
        {
            if(img<0)
                cout<<real<<" - "<<img*(-1)<<"i ";
            else
                cout<<real<<" + "<<img<<"i ";
        }
        friend Complex operator+(Complex,Complex );

};

Complex operator+(Complex a, Complex c)
{
    Complex temp;
    temp.real = a.real + c.real;
    temp.img = a.img + c.img;
    return temp;
}


int main()
{
    Complex c1, c2, c3;
    c1.setnum(5,8);
    c2.setnum(9,6);
    c3= c2+c1;
    c3.displaynum();
}
