#include <iostream>
using namespace std;

void fib(int n)
{
    int x1=0, x2 =1, nxtnmbr;
    for(int i = 1; i<=n; i++)
    {
        nxtnmbr = x1 + x2;
        cout<<x1<<" ";
        x1 = x2;
        x2 = nxtnmbr;
    }
    return;
}
int main()
{
    int n;
    cout << "Enter number to print Fibonacci Number ";
    cin>>n;
    cout<<"Finonacci Number upto "<<n<<" is ";
    fib(n);
    return 0;
}