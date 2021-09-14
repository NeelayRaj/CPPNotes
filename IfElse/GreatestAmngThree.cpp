#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 Numbers To Compare"<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        cout<<a<<" is Greatest"<<endl;
        else
        cout<<c<<" is Greatest"<<endl;
    }else{
        if(b>c)
        cout<<b<<" is Greatest"<<endl;
        else
        cout<<c<<" is Greatest"<<endl;
    }
    return 0;
}