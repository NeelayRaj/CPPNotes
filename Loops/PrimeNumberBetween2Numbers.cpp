#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 numbers to print Prime Number Between Them ";
    cin>>a>>b;
    if(a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b<2)
    {
        cout<<"Numbers Must be greater than 2";
    }else
    {
        cout<<"Prime Numbers between "<<a<<" and "<<b<<" are ";
        int i;
        for ( i = a; i < b; i++)
        {
            int j ;
            for ( j = 2; j < i; j++)
            {
                if(i%j==0)
                break;
            }
           if(j==i) 
           cout<<i<<" ";
        }
    }
    return 0;
}