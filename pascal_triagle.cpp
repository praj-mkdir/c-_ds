//1 
//0c0

//1   1
//1c0  1c1

//1   2   1
//2c0 2c1 2c2

//1   3   3   1
//3c0 3c1 3c2 3c3

//1   4   6   4   1
//4c0 4c1 4c2 4c3 4c4 

// here row will go from 1 to n
// column will go from 1 to row number
// n = i
// c= j
//t(c,i)=icj


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