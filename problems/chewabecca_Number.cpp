/* Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers
but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.
Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, 
zero) digits. The decimal representation of the final number shouldn't start with a zero.
Input Format
The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.
Constraints
x <= 100000000000000000
Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
Sample Input
4545
Sample Output
4444
Explanation */
#include<iostream>
using namespace std ;
main()
{
    char a[100];
    cin>>a;
    int i=0;
    if (a[i]=='9')
    {
        i++;
    }
    for (; a[i] != '\0'; i++)
    {
        int digit = a[i]-'0'; //what this is doing here is if we just give digit=a[i] 
                               // then value of the digit will be ascii value of that a[i]
                               //so '0' is 48 suppose a[i]=5=53-->53-48=5 which is in a[i]
        if (digit >= 5)
        {
            digit=9-digit;
            a[i]=digit+'0'; // this is just int to char 
        }
        
    }
    cout<<a<<endl;
    
}