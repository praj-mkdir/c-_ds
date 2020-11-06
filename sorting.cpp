#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int array[n];
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n-1;i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            if (array[j]<array[i])
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
            
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        cout<<array[i];
    }
    
    return 0;
}

