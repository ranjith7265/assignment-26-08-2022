// Factorial of given number using recursion function

/*
----- Algorithm -----
1. Declare the variables ( n,ans)
2. Get the input from the user (n )
3. create the recursion function to check 
            if(n==1) --> return n value 
            otherwise return(n*fact(n-1)--> function is calling itself(recursion).
            then return n value and store it in some variable (ans)
4. print the answer (ans)
5. end 
*/

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return (n*fact(n-1));
    }
    return n;
}

int main()
{
    int n,ans;
    cout<<"Enter the positive number:";
    cin>>n;
    ans=fact(n);
    cout<<"factorial of "<<n<<"! = "<<ans;
    return 0;
}