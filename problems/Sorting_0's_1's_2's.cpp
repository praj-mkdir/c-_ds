#include<iostream>
using namespace std ;
void sss(int n ,int arr[])
{
   int i ,j ;
   for ( i = 0; i < n-1 ; i++)
   {
       for ( j = i+1  ; j < n ; j++)
       {
           if(arr[i]>arr[j])
           {
               int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
           }
       }
       
   }
   
    
  for ( i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";
  }
    
}
void countsort(int n ,int arr[]){ // this function not working 
    int i , j ;
    int count0=0;
    int count1=0;
    int count2=0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            count0+=1;
        }
        else if (arr[i]==1)
        {
            count1+=1;
        }
        else if(arr[i]==2)
        {
            count2+=1;
        }
        
        
        
    }
    for ( i = 0 ; i < n-1 ; i++)
    {
        if (i<count0)
        {
            cout<<"0 ";
        }
        else if(i > count0 && i < count1 )
        {
            cout<<"1 ";
        }
        
        
    }
    
    
}
/* initially place the low pointer at the start and even the mid pointer
and the high pointer at last 
it based on the fact that all numbers from 0 to lo-1 are 0's
and all numbers from high+1 to n are 2's 
all elements towards the leftside are 0 and all the elements towards the right side are 2's
*/
void swap_(int n , int arr[])
{   
    int i ;
    int lo=0;
    int mid=0;
    int hi=n-1;
    while (mid<=hi)
    {
        switch (arr[mid])
        {
        case 0 :
            swap(arr[lo],arr[mid]);
            lo++; mid++;
            break;
        
        case 1 :
            mid++;
            break;
        case 2 :
            swap(arr[mid],arr[hi]);
            hi--;
            break;
        }
    }
    for ( i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
main()
{
    int n,i ;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //sss(n,arr); //time complexity of this solution is o(n^2)
    //countsort(n,arr);
    swap_(n , arr );
}