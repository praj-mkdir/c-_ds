#include<iostream>
using namespace std ;
int main()
{
   
    int col,row,i,j;
    //cout<<"enter the number of rows and columns "<<endl;
    //cin>>row>>col;
    int n;
    cin>>n;
    int count=1;
    for(i=1;i<=n;i++)
    {

      for(j=1;j<=i;j++)
        cout<<"* ";

    int space=2*n-2*i;
      for (j=1;j<=space;j++)
      {
          cout<<"  ";
      }
    for(j=1;j<=i;j++)
       {

            cout<<"* ";
       }cout<<endl;
        
    }
    for(i=n;i>=1;i--)
    {

      for(j=1;j<=i;j++)
        cout<<"* ";

    int space=2*n-2*i;
      for (j=1;j<=space;j++)
      {
          cout<<"  ";
      }
    for(j=1;j<=i;j++)
       {

            cout<<"* ";
       }cout<<endl;
        
    }
      
    return 0;
       
        
    }
    
