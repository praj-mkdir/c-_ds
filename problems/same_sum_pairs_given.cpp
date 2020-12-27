#include<iostream>
using namespace std;
main()
{

    int n ;
    /* cin>>n;
    int arr[n];
    cout<<"Enter the sorted array"<<endl;
    for ( int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    int k; 
    cin>>k; */
    int k=16;
    int arr[]={1,3,5,7,10,11,12,13};
    int j=sizeof(arr)/sizeof(int)-1;
    int i=0;
    while (i<j)
    {
        
        int cs ;
        cs=arr[i]+arr[j];
        if (cs < k)
        {
            i++;
        }
        else if(cs > k )
        {
            j--; 
        }
        else if (cs == k)
        {
            cout<<"the pairs are "<<"("<<arr[i]<<" "<<arr[j]<<")"<<endl;
            i++;
            j--;  
        }
        

    }
    

}