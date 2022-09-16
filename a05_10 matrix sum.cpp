/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/

#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        friend void getmatrix(Matrix &x);
        friend void displaymatrix( Matrix x);
        friend Matrix operator+(Matrix m, Matrix n);

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
            cout<<x.a[i][j];
            if(x.a[i][j]<10)
                cout<<"  ";
            else
                cout<<" ";
        }
        cout<<"\n\n";
    }
}

Matrix operator+(Matrix m, Matrix n)
{
    Matrix temp;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            temp.a[i][j]=m.a[i][j] + n.a[i][j];
        }
    }
    return temp;
}

int main()
{
    Matrix m1, m2, m3;
    cout<<"Enter the value of the 1st matrix.\n";
    getmatrix(m1);
    cout<<"Enter the value of the 2nd matrix.\n";
    getmatrix(m2);
    m3= m1+m2;
    cout<<"Result of sum of two matrices.\n";
    displaymatrix(m3);

}
