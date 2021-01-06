////find Largest sum contiguous Subarray [V. IMP]
//using kadanes algo
#include<iostream>
using namespace std;
main()
{
    int i,count;
    cin>>count;
    int arr[count];
    for ( i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int current_sum=0;
    int mx=0;
    for ( i = 0; i < count; i++)
    {
       current_sum+=arr[i];
       if (current_sum<0)
       {
           current_sum=0;
       }
        mx=max(current_sum,mx);

       
    }
    cout<<mx;
    
}