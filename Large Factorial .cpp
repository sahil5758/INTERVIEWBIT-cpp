//Given a number A. Find the fatorial of the number.

#include<bits/stdc++.h>

string multiply(string str, int multi)

{
    string tempStr = "";

    int carry = 0;

    int x = 0;

    for(int i=str.length()-1; i>=0; i--)

    {

        x = (str[i]-'0') * multi + carry;

        carry = x/10;

        

        tempStr = to_string(x%10) + tempStr;

    }

    if(carry > 0)

    {

        tempStr = to_string(carry) + tempStr;

    }

    return tempStr;

    

}


// We can try to modify in one string and save space

// This wil reduce space to number of integers in output.

string Solution::solve(int A) 

{

    if(A < 2)

        return "1";

    

    string out = "1";

    

    for(int i=2; i<=A; i++)

       out = multiply(out, i);

       

    return out;  

}
