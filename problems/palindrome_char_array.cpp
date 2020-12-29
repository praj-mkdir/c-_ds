//check whether the string is palindrome 

#include<iostream>
#include<cstring>
using namespace std ; 
bool ispalindrome(char str [] )
{
    int i=0;
    int j=strlen(str)-1; // lenght of the string 
    while (i<j)
    {
        if(str[i]==str[j]) //two pointer approach 
        {
            j--;
            i++;
        }
        else
        {
            return false ;
        }
        
        

    }
    return true;   
    
}
main()
{
    char str[100];
    cin.getline(str,100);
    if(ispalindrome(str))
    {
        cout<<"It is palindrome "<<endl;
    }
    else
    {
        cout<<"it is not palindrome "<<endl;
    }
    

    
    return 0;
}
