#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of side of Rhombus ";
    cin>>n;
    for(int i = 1; i<= n; i++)
    {
        for(int j = n-i; j>= 0; j--)
        cout<<"  ";
        for(int j = 1; j <= n; j++)
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}