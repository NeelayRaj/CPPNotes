#include<iostream>
using namespace std;

int fact(int n)
{
    int fac = 1;
    for(int i = n; i>0;i--)
    fac *=  i;
    return fac;
}
int nCr(int n, int r)
{
    int fn,fr,fnmr;
    fn = fact(n);
    fr = fact(r);
    fnmr = fact(n-r);
    //cout<<fn<<" "<<fr<<" "<<fnmr;
    int comb = fn / (fr*fnmr);
    return comb;
}
int main()
{
    int n,r;
    cout<<"To Find nCr Enter Value of n and r ";
    cin>>n>>r;
    if(n>=r)
    cout<<"nCr of "<<n<<" and "<<r<<" is "<<nCr(n,r);
    else
    cout<<"Study Permutation and Combination first to Solve this Problem ";
    return 0;
}