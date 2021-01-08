#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergee(int arr1[],int n,int arr2[],int m)
{
    int i=0;
    while (i<n )
    {
        if (arr1[i]<arr2[0])
        {
            i++;
        }
        else if(arr1[i]>arr2[0])
        {
            swap(arr1[i],arr2[0]);
            sort(arr2,arr2+m);
        }
        
        
    }
    for ( i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for ( i = 0; i < m ; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    
    
}
main()
{
    int arr1[] = {1, 5, 9, 10, 15, 20};
    int arr2[] = {2, 3, 8, 13};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    /* cout<<n;
    cout<<m; */
   mergee(arr1,n,arr2,m);
    
    
    
    
    
}