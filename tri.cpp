#include<iostream>
using namespace std ;
int main()
{
   
    int col,row,i,j;
    //cout<<"enter the number of rows and columns "<<endl;
    //cin>>row>>col;
    int n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {    
            cout<<" ";

        }
        for(j=1;j<=i;j++)
        {    
            cout<<j<<"";

        }
        cout<<endl;
    
    }





}