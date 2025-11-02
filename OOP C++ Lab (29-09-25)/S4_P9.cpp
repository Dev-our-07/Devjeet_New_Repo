/*Define a class Matrix with a 2x2 array. Create a member function add(Matrix 
&m) that returns the sum as a new Matrix object (by value).*/
#include <iostream>
using namespace std;

class Matrix
{
    public:
    int arr[2][2];

    Matrix()        //Default constructor
    {
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                arr[i][j]=0;
    }

    Matrix add(Matrix &m)
    {
        Matrix temp;
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];
        return temp;
    }
};

int main()
{   Matrix m1, m2, m3;
    m1=Matrix();
    m2=Matrix();
    m3=m1.add(m2);

    cout<<"Resultant Matrix after addition is: "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            cout<<m3.arr[i][j]<<" ";
        cout<<endl;
    }
    

    return 0;
}