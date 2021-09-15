#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter A number to Reverse it ";
    cin>>n;
    cout<<"Reverse Of "<<n<<" is ";
    while (n>0)
    {
        cout<<n%10;
        n/=10;
    }
    return 0;
}