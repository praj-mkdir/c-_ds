#include<iostream>
using namespace std ;

void sort(int arr[],int n)
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
} 
// it is called buble sort because we are pushing maximum element up 
void buble(int arr[],int n)
{
    int counter=1;
    int i;
    while (counter<n-1) // n-1 
    {
        for ( i = 0; i <n-counter ; i++) // i th iteration should go  till n-i ///
        {
            if (arr[i]>arr[i+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}


main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //buble(arr,n);
    sort(arr,n);
}