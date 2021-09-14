#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number "<<endl;
    cin>>n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum+=i;
    cout<<"Sum Of "<<n<<" Natural number is "<<sum;
    return 0;
}