// given an array of arr[] of size n . for every i from 0 to n-1 output max(a[0],a[1],a[2].....)
// ex : [0 1 4 2 5] this is an arry
// maxof 0 is 0 ,max btw 0, 1 = 1
// max btw 1,4 =4 max btw 2,4 =4 ,max btw 2,5 =5 
// output ==[0 1 4 4 5]

#include<iostream>
using namespace std ;

main ()
{
    int i ,n ;
    cin>>n;
    int ma=-19999;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    
    }
    for ( i = 0; i < n; i++)
    {
        ma=max(ma,arr[i]);
        cout<<ma;
    }
    
}