// Factorial the given number
/*
----- Algorithm -----
1. Declare the variables ( n,i,fact{1} )
2. Take the Input from the user as N
3. for(i=1;i<=n;i++)
        fact=fact*i;
4. Print the Fact as a result
5. end
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i,fact{1};
    cout << "Enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        cout<<"fact*i ="<<fact<<"\n";
    }
    cout<<"\nFactorial of "<<n<<"! is = "<<fact;
    
    return 0;
}