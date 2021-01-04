#include<iostream>
using namespace std;
void un(int arr1[],int arr2[],int n,int m)
{
    int i=0;
    int j=0;
    while (i<n && j<n)
    {
        if (arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;j++;
        }        
        
    }
    if (i<n)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    if (j<m)
    {
        cout<<arr2[j]<<" ";
        j++;    
    }
    
    
    
}
void in(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    while (i<n && j<n)
    {
        if (arr1[i]<arr2[j])
        {
            
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;j++;
        }        
        
    }
}
main()
{
    int i,n; 
    int arr1[]={ 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    in(arr1,arr2,n,m);
    //un(arr1,arr2,n,m);
}