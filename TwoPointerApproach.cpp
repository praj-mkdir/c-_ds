//Given sorted array , find the pair of elements that sum to k (the pair will be given)
// two pointer approach i.e  first of all the array should be sorted and set two values 
/* arr[5]={1,3,5,7,10,11,12,13} and the k=16 and set value of i=0 j=last_element
by adding 13+1=14 which is less than 16 so we have to move i 
now i=3 and j=13 and if we get the value than i++ and j-- (basically move both i and j)
now 5+12=17 so basically we have to reduce the larger number i.e j */


#include<iostream>
using  namespace std ;
main()
{
    int i,j,k,n;
    k=16;
    int arr[]={1,3,5,7,10,11,12,13};
    i=  0 ;
    j = sizeof(arr)/sizeof(int)-1;
    
    while (i<j)
    {
        int cs=arr[i]+arr[j];
        if (cs<k)
        {
            i++;    
        }
        else if (cs>k)
        {
            j--;
        
        }
        else if(cs==k)
        {
            cout<< arr[i] <<" and " <<arr[j]<<endl;
            i++;
            j--;            
        }
        
        
    }
    
    
    
}
//for finding the size of the array int n= sizeof(array)/sizeof(int or indiviual )