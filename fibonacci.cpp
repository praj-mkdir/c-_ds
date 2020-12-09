#include<iostream>
using namespace std ;
void fib(int n )
{
    int t1,t2,nextt;
    t1=0;
    t2=1;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<endl;
        nextt=t1+t2;
        t1=t2;
        t2=nextt;
    }
    return;
}

main()
{
    int n ;
    cin>>n;
    fib(n);
}