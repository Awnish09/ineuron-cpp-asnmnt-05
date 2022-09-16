/*Define a class Complex with appropriate instance variables and member functions.*/

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
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
        Complex operator-(Complex c)
        {
            Complex temp;
            temp.real = real - c.real;
            temp.img = img - c.img;
            return temp;
        }
        Complex operator*(Complex c)
        {
            Complex temp;
            temp.real = real * c.real;
            temp.img = img * c.img;
            return temp;
        }
        int operator==(Complex c)
        {
            if(real==c.real && img==c.img)
                return 1;
            else
                return 0;
        }
        void display()
        {
            if(img<0)
                cout<<real<<" - "<<img*(-1)<<"i ";
            else
                cout<<real<<" + "<<img<<"i ";
        }
};

int main()
{
    Complex c1, c2, c3, c4;
    c1.setnum(8,6);
    c2.setnum(4,5);
    c3=c1+c2;
    c3.display();
    cout<<endl;

    c3=c1-c2;
    c3.display();
    cout<<endl;

    c3=c2-c1;
    c3.display();
    cout<<endl;

    c4.setnum(10,5);
    c3=c4-c1;
    c3.display();
    cout<<endl;
    cout<<endl;

    c3=c4+c1+c2;
    c3.display();
    cout<<endl;
    cout<<endl;

    c3=c1*c2;
    c3.display();
    cout<<endl;

    if(c1==c2)
        cout<<"True";
    else
        cout<<"False";
    cout<<endl;

    c2.setnum(10,5);
    if(c4==c2)
        cout<<"True";
    else
        cout<<"False";
}
