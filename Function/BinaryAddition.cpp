#include<iostream>
using namespace std;

int BinSum(int n1, int n2)
{
    int a , b , x= 1, sum = 0, carry = 0;
    while(n1 > 0 && n2 > 0)
    {
        a = n1 % 10 , b = n2 % 10;
        n1 /= 10 , n2 /= 10;
        if (a == 0 && b ==0)
        {
            if (carry == 1)
            {
                sum += 1 * x ;
                carry = 0;
            }else
            {
                sum += 0 * x;
                carry = 0;
            }
            x *= 10;
        }
        if((a == 0 && b == 1) || (a == 1 && b == 0))
        {
            if (carry == 1)
            {
                sum += 0 * x ;
                carry = 1;
            }else
            {
                sum += 1 * x;
                carry = 0;
            }
            x *= 10;
        }
        if(a == 1 && b == 1)
        {
            if (carry == 1)
            {
                sum += 1 * x ;
                carry = 1;
            }else
            {
                sum += 0 * x;
                carry = 1;
            }
            x *= 10;
        }
    }
    while(n1 > 0)
    {
        a = n1%10;
        n1 /= 10;
        if(n1 == 1)
        {
             if (carry == 1)
            {
                sum += 0 * x ;
                carry = 1;
            }else
            {
                sum += 1 * x;
                carry = 0;
            }
            x *= 10;
        }else
        {
             if (carry == 1)
            {
                sum += 1 * x ;
                carry = 0;
            }else
            {
                sum += 0 * x;
                carry = 0;
            }
            x *= 10;
        }
    }
    while(n2 > 0)
    {
        a = n2%10;
        n2 /= 10;
        if(n2 == 1)
        {
             if (carry == 1)
            {
                sum += 0 * x ;
                carry = 1;
            }else
            {
                sum += 1 * x;
                carry = 0;
            }
            x *= 10;
        }else
        {
             if (carry == 1)
            {
                sum += 1 * x ;
                carry = 0;
            }else
            {
                sum += 0 * x;
                carry = 0;
            }
            x *= 10;
        }
    }
    if(carry == 1)
    {
        sum += 1 * x;
    }
    return sum;
}
int main()
{
    int n1,n2;
    cout<<"Enter two binary number to add ";
    cin>>n1>>n2;
    cout<<"Binary Sum of "<<n1<<" and "<<n2<<" is "<<BinSum(n1,n2);
    return 0;
}