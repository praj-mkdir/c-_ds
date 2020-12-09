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
    int ans , n,r;
    cin>>n>>r;
    ans=factt(n)/(factt(r)*factt(n-r));
    cout<<ans;

}