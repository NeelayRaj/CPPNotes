#include<iostream>
using namespace std;

int sum(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    int n1,n2;
    cout<<"Enter two number ";
    cin>>n1>>n2;
    cout<<sum(n1,n2)<<endl;
    return 0;
}