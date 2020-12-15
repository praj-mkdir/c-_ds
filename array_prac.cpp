#include<iostream>
using namespace std ;

 int linear(int arr[],int key, int n)  //time complexity of this program is O(n) (worst case ) because it has go through whole array 
{
    for (int i = 0 ; i< n;i++)
    {
        if (key==arr[i])
        {
            return i ;
        }
    }
    return -1 ;
}

int binn(int arr[],int n ,int key) //sorting
{
     for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1 ; j < n; j++)
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
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    int s=0;
    int e=n;
    int mid;
    while (s<=e)
    {
        mid=(s+e)/2;
        if (mid[arr]==key)
        {
            return mid ;
        }
        else if (mid[arr]>key)
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
main()
{
    cout<<"----------------1.LINEAR SEARCH-------------"<<endl;
    cout<<"----------------2.BINARY SEARCH--------------"<<endl;
    cout<<"Enter the number ";
    int number;
    cin>>number;
    int n ;
    cout<<"Enter the array size " <<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for( int i=0 ;i < n ;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;
    
    switch (number)
    {
    case 1:
        cout<<linear( arr, n, key);
        break;
    case 2:
        cout<<binn(arr, n,key);
        break;
    default:
        cout<<"SELECT FROM NUMBER FROM ABOVE"<<endl;
        break;
    }
     // cout<<linear( arr, n, key);
    //cout<<binn(arr, n,key);
}
 
