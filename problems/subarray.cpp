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