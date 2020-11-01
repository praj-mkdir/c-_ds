#include<iostream>
#include<climits> //the reason to use this header file for INT_MIN and INT_MAX
                 //INT_MAX is largest integer value which is used by complier 
                 //INT_MIN  is smallest integer value possible used by complier 

using namespace std;
 main()
{
    int n,i;
    cout<<"enter the size of array \n";
    cin>>n;
    int array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    int maxn=INT_MIN;
    int minn=INT_MAX;
    for ( i = 0; i < n; i++)
    {
        maxn=max(maxn,array[i]); //max compares the two values given to it,  it compares maxn with array[i]
        minn=min(minn,array[i]);
    }
    cout<<"maximum number is "<<maxn<<endl;
    cout<<"minmum number is "<<minn<<endl;

    return 0;
}
