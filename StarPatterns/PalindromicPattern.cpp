#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter No. Of line to print ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        int j;
        for(j = 1; j<=n-i;j++)
        cout<<" ";
        int k = n-j+1;
        for(int l=1;l<=i;l++)
        cout<<k--;
        for(int l=2; l<=i;l++)
        cout<<l;
        cout<<endl;
    }
    return 0;
}