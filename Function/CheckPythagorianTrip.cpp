#include<iostream>
using namespace std;

bool pt(int x, int y , int z)
{
    int a = max(x, max(y,z)),b,c;
    if(a == x)
    {
        b = y;
        c = z;
    }else if( a == y )
    {
        b = x;
        c = z;
    }else
    {
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c)
    return true;
    else
    return false;
}
int main()
{
    int x,y,z;
    cout<<"Enter three number to check pythagorian triplet ";
    cin>>x>>y>>z;
    if(pt(x,y,z)==true)
    cout<<"It is pythagorian triplet";
    else
    cout<<"It is not pythagorian triplet";
    return 0;
}