#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number to Check Prime (Number should be greater than 1) ";
    cin>>n;
    int x = 2;
    if(n>x)
    {
        int prime = 1;
        while(x<=n/2)
        {
            if (n%x==0)
            {
                prime = 0;
                break;
            }
            x++;
        }
        if (prime==1)
        cout<<"Number is Prime";
        else
        cout<<"Number is Not Prime";
    }
    else
    cout<<"\nNumber is prime";
    return 0;
}