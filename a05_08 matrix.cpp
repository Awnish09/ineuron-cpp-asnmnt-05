/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.*/

#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        friend void getmatrix(Matrix &x);
        friend void displaymatrix( Matrix x);
        friend Matrix operator-(Matrix m);

};

void getmatrix( Matrix &x)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>x.a[i][j];
        }
    }
}

void displaymatrix( Matrix x)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<x.a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

Matrix operator-(Matrix m)
{
    Matrix temp;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            temp.a[i][j]=-m.a[i][j];
        }
    }
    return temp;
}

int main()
{
    Matrix m1, m2;
    cout<<"Enter the value of the matrix.\n";
    getmatrix(m1);
    cout<<"Matrix before (-)\n";
    displaymatrix(m1);
    m2=-m1;
    cout<<"Matrix after (-)\n";
    displaymatrix(m2);

}
