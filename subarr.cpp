#include<iostream>
using  namespace std ;
main()
{
    int i,j,k,n;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //generate the sub array 
    for ( i = 0 ; i < n; i++)
    {
        for (j  = i ; j< n; j ++)
        {
         //elements of subarray arr[i,j]
            for ( k = i ; k <= j ; k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    
        
    }
    
    
}