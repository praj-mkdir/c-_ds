#include<iostream>
using namespace std;
main()
{
    int i ,n ,j=0;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n ; i++)
    {
        cin>>arr[i];

    }
    /* //TWO pointer approach 
    int lo=0;
    int high=n-1;
    while (lo<=high)
    {
        if (arr[lo]<0 && arr[high]<0)
        {
            lo++;
        }
        else if(arr[lo] > 0 && arr[high]<0  )
        {
            swap(arr[lo],arr[high]);
            lo++;high--;
        }
        else if(arr[lo] > 0 && arr[high] > 0)
        {
            high--;
        }
                
    } */
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for ( i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}