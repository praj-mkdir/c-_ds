#include<iostream>
using namespace std ;
int main()
{
   
    int col,row,i,j;
    cout<<"enter the number of rows and columns "<<endl;
    cin>>row>>col;
    for (i=0;i<row;i++)
    {
        for ( j = 0; j < col; j++)
        {
            cout<<"*";

        }
        cout<<"\n";
       
        
    }
    

}