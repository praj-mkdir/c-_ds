//remove consecutive Duplicates cccoooddding ---> coding
#include<iostream>
#include<cstring>
using namespace std ;
void removed(char str[])
{
    int prev =0;
    int l = strlen(str);

    if (l==0 or l==1)
    {
        return;
    }
    
    for ( int cur = 1 ; cur < l  ; cur++)
    {
        if (str[cur]!=str[prev])
        {
            prev++;
            str[prev]=str[cur];    
        }
        
    }
    str[prev+1]='\0';
    return;
    
}
main ()
{
    char str[100];
    cin.getline(str,100);
    removed(str);
    cout<<str;
    
}