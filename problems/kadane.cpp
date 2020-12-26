//2_Kadane_algo
#include<iostream>
using namespace std;
main()
{
    int i ,n ;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    int cs=0 , mx=0;
    for ( i = 0; i < n; i++)
    {
        cs=cs+arr[i];
        if (cs < 0 )
        {
            cs=0;
        }
        mx=max(cs,mx);
        
    }
    cout<<"the maximum value by Kadane algo is " <<mx;
    
}