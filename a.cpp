#include<iostream>
using namespace std ;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


   int i,j,n;
  
   cin>>n;
  
   int arr[n];
   for ( i = 0; i <n; i++)
   {
       cin>>arr[i];
   }
   for ( i = 0; i <n; i++)
   {
       cout<<arr[i]<<"\n";
   }
}
