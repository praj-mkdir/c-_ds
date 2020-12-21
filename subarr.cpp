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
    int r=-1,l=-1;
    int max=-99999;
    for ( i = 0 ; i < n; i++)
    {
        for (j  = i ; j< n; j ++)
        {
         //elements of subarray arr[i,j]
            int sum=0;
            for ( k = i ; k <= j ; k++)
            {
                
               //cout<<arr[k]<<",";  
                sum+=arr[k];
                

            }
            //cout<<"-->sum="<<sum<<endl;
            if (sum>max)
            {
                max=sum;
                l=i;
                r=j;
            }
            
            
        }
    
        
    }
    //cout<<i<<j<<endl;
    for ( k = l; k < j ; k++)
    {
        cout<<arr[k];
    }
    
    cout<<endl<<"max sum is "<<max;
    
}
//here 3 loops are used so there will be 3 iterations 