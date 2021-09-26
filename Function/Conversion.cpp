//Dec To Hex is not there in this code
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void BinToDec(int n)
{
    int a,b=1,sol=0;
    while (n>0)
    {
        a = n%10;
        sol += a*b;
        b*=2;
        n/=10;
    }
    cout << "Decimal Of Given Number is "<<sol;
    return;
}
void OctToDec(int n)
{
    int a,b=1,sol=0;
    while (n>0)
    {
        a = n%10;
        sol += a*b;
        b*=8;
        n/=10;
    }
    cout << "Decimal Of Given Number is "<<sol;
    return;
}
void HexToDec(string s)
{
    int b = 1, sol = 0;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i]>='0' && s[i] <= '9')
            sol += (s[i] - '0')*b;
        if(s[i]>='A' && s[i]<= 'F')
            sol += (s[i] - 'A' + 10)*b;
        b*=16;
    }
    cout << "Decimal of Given Hexadecimal is "<<sol;
    return;
}
void DecToBin(int n)
{
    int a,b=1,sol=0;
    while (n>0)
    {
        a = n%2;
        sol += a*b;
        b*=10;
        n/=2;
    }
    cout << "Binary Of Given Number is "<<sol;
    return;
}
void DecToOct(int n)
{
    int a,b=1,sol=0;
    while (n>0)
    {
        a = n%8;
        sol += a*b;
        b*=10;
        n/=8;
    }
    cout << "Octal Of Given Number is "<<sol;
    return;
}
void DecToHex(int n)
{
   
}
int main()
{
    int n , x;
    string s;
    cout << "Enter 1 to Convert Binary To Decimal"<<endl;
    cout << "Enter 2 to Convert Octal To Decimal"<<endl;
    cout << "Enter 3 to Convert Hexadecimal To Decimal"<<endl;
    cout << "Enter 4 to Convert Decimal To Binary"<<endl;
    cout << "Enter 5 to Convert Decimal To Octal"<<endl;
    cout << "Enter 6 to Convert Decimal To Hexadecimal"<<endl;
    cin>>n;
    switch (n)
    {
    case 1 :cout<<"Enter No. To Convert ";
            cin>>x;
            BinToDec(x);
        break;
    case 2 :cout<<"Enter No. To Convert ";
            cin>>x;
            OctToDec(x);
        break;
    case 3 :cout<<"Enter No. To Convert ";
            cin>>s;
            HexToDec(s);
        break;
    case 4 :cout<<"Enter No. To Convert ";
            cin>>x;
            DecToBin(x);
        break;
    case 5 :cout<<"Enter No. To Convert ";
            cin>>x;
            DecToOct(x);
        break;
    case 6 :cout<<"Enter No. To Convert ";
            cin>>x;
            DecToHex(x);
        break;
    default:cout<<"Wrong Input ";
        break;
    }
    return 0;
}