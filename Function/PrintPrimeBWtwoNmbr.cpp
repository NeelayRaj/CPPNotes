#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a)
{
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n1,n2;
    cout<<"Enter two number to print prime number between them ";
    cin>>n1>>n2;
    cout<<"Prime Number Between "<<n1<<" And "<<n2<<" are ";
    for(int i = n1; i<=n2; i++)
    {
        if(isPrime(i)==true)
        cout<<i<<" ";
    }
    return 0;
}