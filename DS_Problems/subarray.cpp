#include<iostream>
using namespace std;
main()
{
    int i ,n ,j,k;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // here the time complexity is O(n³) and it brute method 
    
    for ( i = 0; i < n; i++)
    {
        for ( j = i ; j < n; j++)
        {
            for ( k = i; k <= j; k++)
            {
                cout<<arr[k];
            }
            cout<<endl;
        }
        
    }
    
}