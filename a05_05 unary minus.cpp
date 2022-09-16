/*class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/

#include<iostream>
using namespace std;

class Numbers
{
    private:
        int x,y,z;
    public:
        void setnum(int a, int b, int c)
        {
            x=a;
            y=b;
            z=c;
        }
        Numbers operator-()
        {
            Numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return (temp);
        }
        void getnum()
        {
            cout<<x<<", "<<y<<", "<<z<<"\n";
        }
};


int main()
{
    Numbers n1, n2;
    n1.setnum(5,2,8);
    n2=-n1;
    n2.getnum();
    n1.getnum();
}
