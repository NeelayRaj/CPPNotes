#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter No. Of Star ";
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        for(int j = 1; j<=n;j++)
        {
            int x=3,y=1;
            if ((i==2 && j%2==0) || ((i==1)||(i==3)) && (i+j)%4==0) 
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}