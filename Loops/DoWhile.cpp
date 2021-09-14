#include<iostream>
using namespace std;

int main()
{
    unsigned short  int n,count=0;
    cout<<"Enter a Number less than 32000 "<<endl;
    cin>>n;
    do
    {
        count++;
        n--;
    } while (n>0);
    cout<<"Count of Loop is "<<count<<endl;
    return 0;
}