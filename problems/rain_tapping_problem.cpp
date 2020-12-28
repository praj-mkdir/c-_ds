/* Approach: In the previous solution, to find the highest bar on the left and right,
 array traversal is needed which reduces the efficiency of the solution. 
 To make this efficient one must pre-compute the highest bar on the left and right of every bar in linear time. 
 Then use these pre-computed values to find the amount of water in every array element.
Algorithm: 
Create two array left and right of size n. create a variable max_ = INT_MIN.
Run one loop from start to end. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign left[i] = max_
Update max_ = INT_MIN.
Run another loop from end to start. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign right[i] = max_
Traverse the array from start to end.
The amount of water that will be stored in this column is min(a,b) – array[i],(where a = left[i] and b = right[i]) add this value to total amount of water stored
Print the total amount of water stored. */
#include<iostream>
using  namespace std ;
main()
{
    int arr[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lft[n];
    int rght[n];
    int i;
    //int mx=INT_MIN;
    int water=0;
    lft[0]=arr[0];
    for ( i = 1; i < n; i++)
    {
        lft[i]=max(lft[i-1],arr[i]);
    }
    rght[n-1]=arr[n-1];
    for ( i = n-2; i >=0 ;  i--)
    {
        rght[i]=max(rght[i+1],arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        water += min(lft[i], rght[i]) - arr[i];
    }
    cout<<"maximum water accumlated "<<water;
    



}