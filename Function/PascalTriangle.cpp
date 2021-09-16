#include <iostream>
using namespace std;

int fact(int n)  //Function for Factorial
{
    int f = 1;
    for(int i = n ; i > 0; i--)
    f *= i;
    return f;
}
int nCr(int n, int r)  //Function for Combination 
{
    int fn = fact(n);
    int fr = fact(r);
    int fnmr = fact (n-r);
    return fn / (fr*fnmr);
}
int main()
{
    int n;
    cout<<"Enter Number of line to print ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<= i; j++)
        cout<<nCr(i,j)<<" ";    //To Print Pascal Triangle
        cout<<endl;
    }
    return 0;
}