#include <iostream>
using namespace std;

int fact(int n)
{
    int fac = 1;
    for(int i = n; i > 0; i--)
    fac *= i;
    return fac;
}
int main()
{
    int num;
    cout<< " Enter a Number to find Factorial of that ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<fact(num);
    return 0;
}