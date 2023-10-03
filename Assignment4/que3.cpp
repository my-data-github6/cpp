#include<iostream>
using namespace std;
class Matrix
{
 private:
 int **mat;
 int **mat3;
 int i,j;

 public:
 Matrix(int row,int col)
 {
    i=row;
    j=col;
    this->mat=new int *[row];
    for (int i = 0; i < this->i; i++)
    {
            this->mat[i]=new int[this->j];        
    }
    
 }

 void accept_valuesMatrix()
 {
    for (int i = 0; i < this->i; i++)
    {
        for (int j = 0; j < this->j; j++)
        {
            cout <<"Enter the values for "<<"["<<i<<"]""["<<j<<"]" <<endl;
            cin>>mat[i][j];
        }
        
    }
   
 } 

 void printMatrix()
 {
    for (int i = 0; i < this->i; i++)
    {
        for (int j = 0; j < this->j; j++)
        {
            //cout << "arr[" << i << "][" << j << "] = " << mat[i][j] << endl;
            cout <<mat[i][j]<<" ";
        }
     cout<<"\n";   
    }
 }

friend void addMatrix(Matrix &A1,Matrix &A2);
friend void substractMatrix(Matrix &A1,Matrix &A2);
friend void mulMatrix(Matrix &A1,Matrix &A2);
friend void transMatrix(Matrix &A1,Matrix &A2);
 ~Matrix()
 {
    for (int r = 0; r < this->i; r++)
    delete[] mat[r];
    delete[] mat;
 }
};
void addMatrix(Matrix &A1,Matrix &A2)
{
   // Matrix A3(int row,int col);
    for (int i = 0; i < A1.i; i++)
    {
        for (int j = 0; j <A1.j; j++)
        {
            //cout << "arr[" << i << "][" << j << "] = " << mat[i][j] << endl;
            cout <<(A1.mat[i][j])+(A2.mat[i][j])<<" ";
        }
     cout<<"\n";   
    }
}
void substractMatrix(Matrix &A1,Matrix &A2)
{
   // Matrix A3(int row,int col);
    for (int i = 0; i < A1.i; i++)
    {
        for (int j = 0; j <A1.j; j++)
        {
            //cout << "arr[" << i << "][" << j << "] = " << mat[i][j] << endl;
            cout <<(A1.mat[i][j])-(A2.mat[i][j])<<" ";
        }
     cout<<"\n";   
    }
}
void mulMatrix(Matrix &A1,Matrix &A2)
{
   // Matrix A3(int row,int col);
    for (int i = 0; i < A1.i; i++)
    {
        for (int j = 0; j <A1.j; j++)
        {
            int x=0;
            for (int k = 0; k < A1.i; k++)
            {
             x=x+A1.mat[i][k]*A2.mat[k][j];
            }
            cout<<x<<"\t";
            
        }
     cout<<"\n";   
    }
}
void transMatrix(Matrix &A1,Matrix &A2)
{
for (int i = 0; i < A1.i; i++)
    {
        for (int j = 0; j <A1.j; j++)
        {
            //cout << "arr[" << i << "][" << j << "] = " << mat[i][j] << endl;
            cout <<(A1.mat[j][i])<<" ";
        }
     cout<<"\n";   
    }
}

int main()
{
    int r,c;
    cout<<"Enter the no. rows and column for matrix:"<<endl;
    cin>>r>>c;
    Matrix a1(r,c);
    Matrix a2(r,c);
    a1.accept_valuesMatrix();
    cout<<"************************************************"<<endl;
    a2.accept_valuesMatrix();
    cout<<"************************************************"<<endl;
    a1.printMatrix();
    cout<<"************************************************"<<endl;
    a2.printMatrix();
    cout<<"************************************************"<<endl;
    addMatrix(a1,a2);
    cout<<"************************************************"<<endl;
    substractMatrix(a1,a2);
    cout<<"************************************************"<<endl;
    mulMatrix(a1,a2);
    cout<<"************************************************"<<endl;
    transMatrix(a1,a2);

    return 0;
}