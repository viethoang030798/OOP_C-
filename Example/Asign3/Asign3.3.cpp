#include <iostream>
using namespace std;

int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    double** dp;
    cout<<"Enter rows and columns of first matrix:";
    cin>>m>>n;
    cout<<"Enter rows and columns of second matrix:";
    cin>>p>>q;

    try
    {
       //Here we reserve an array of pointers of type double.
       dp = new double* [m];

    }
       catch (bad_alloc xa)
    {
       cout<<"Memory allocation failed!"<<endl;
       return 1;
    }


    for(i=0; i<m; i++)
    {
       try
       {

           //Here we reserve row arrays of type integer.
           dp[i] = new double[n];

        }
        catch (bad_alloc xa)
        {
          cout<<"Memory allocation failed!"<<endl;
          return 1;
        }
    }


    if(n==p)
    {
        cout<<"\nEnter first matrix:\n";
        for(i=0;i<m;++i)
            for(j=0;j<n;++j)
                cin>>a[i][j];

        cout<<"\nEnter second matrix:\n";
        for(i=0;i<p;++i)
            for(j=0;j<q;++j)
                cin>>b[i][j];

        cout<<"\nThe new matrix is:\n";
        for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
                c[i][j]=0;
                for(k=0;k<n;++k)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                cout<<c[i][j]<<" ";
        }
            cout<<"\n";
        }
    }
    else
        cout<<"\nSorry!!!! Matrix multiplication can't be done";
//Here we free locations of the array of pointers.
//Remember that each location of the array of poniters refers to an array
//of integer numbers.
for(i=0; i<row; i++)
  delete [] dp[i];

//Here we free the array of pointers
 delete [] dp;


    return 0;
}
