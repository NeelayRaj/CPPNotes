#include<iostream>
using namespace std;

void print(int n)
{
    cout<<n<<endl;
    return;
}
int add(int n1, int n2)
{
    print(n1);
    print(n2);
    return n1+n2;
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers to Print and add ";
    cin>>n1>>n2;
    cout<<add(n1,n2);
    return 0;
}