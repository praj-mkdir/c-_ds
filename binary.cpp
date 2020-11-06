#include<iostream>
using namespace std ;
int bin(int array[],int n,int key )
{
    int s=0;
    int e=n;
    int mid;
    while (s<=e)
    {
        mid=(s+e)/2;
        if (array[mid]==key)
        {
            return mid;
        }
        else if (array[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        
       
        
    }
    return -1;
    
}
int main()
{
    int i,n;
    cin>>n;
    int array[n];
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int key ;
    cin>>key;

    cout<<bin(array,n,key);
    return 0;
}
