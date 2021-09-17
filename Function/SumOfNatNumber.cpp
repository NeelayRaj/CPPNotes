#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    sum += i;
    return sum;
}
int main()
{
    int n;
    cout << "Enter number till you want to print sum ";
    cin>>n;
    cout<<"Sum Of Natural number till "<<n<<" is "<<sum(n);
    return 0;
}