
#include<iostream>
using namespace std ;
main()
{
    int n ,i;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    for ( i = 0; i <= n-1; i++)
    {
        for (int  j = i+1 ; j  < n; j++)
        {
            if (arr[j]<arr[i])
            {
               int temp;
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;

               
            }
            
        }
        
    }
    for ( i = 0; i < n ; i++)
    {
        cout<<arr[i]<<endl;
    }
    
     int k;
    cout<<"enter the kth smallest index "<<endl;
    cin>>k;
    cout<<arr[k-1]<<" is the "<<k<<" smallest "<<endl; 

   
    





}