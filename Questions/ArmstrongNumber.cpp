#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to check Armstrong Number ";
    cin>>n;
    int ori = n;
    int x, sum=0;
    while (n>0)
    {
        x = n%10;
        sum += (x*x*x);
        n/=10;
    }
    if (ori==sum)
    cout<<"It is Armstrong Number ";
    else
    cout<<"Not a Armstrong Number";
    return 0;
}