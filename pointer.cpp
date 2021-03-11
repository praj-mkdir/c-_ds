#include<iostream>
using namespace  std;
main()
{
   int n=10 ;
   cout<<&n<<endl; //here we are getting the address of n 
                    //pointers are the variables which store the address of other variables  
    int *p = &n;   //p is a pointer to an integer bcause we store address of intger so we are storing address of n 
    cout<<p<<endl;
    cout<<*p<<endl; // this is called derefrence operator here printing the value of n 
    cout<<sizeof(p)<<endl;
    n++;
    cout<<n<<endl; // here both are same storage 
    cout<<*p<<endl;          
    int a=*p; // here a=*p can be written or n because both are same ;
    a++;
    cout<<a<<endl;
} 

 