#include<iostream>
using namespace std ;
int factt(int n)
{
    int fact=1;
    for ( int i = 2; i <=n; i++)
    {

        fact*=i;
        
    }
    return fact ;
    
}
main()
{
    int n,i,j;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i ; j++) /// here output will be different if u put j<i and j<=i
        {
            cout<<factt(i)/(factt(j)*factt(i-j))<<" ";
        }
        cout<<endl;
        
    }
    
}