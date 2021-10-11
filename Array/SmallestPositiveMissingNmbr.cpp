#include <bits/stdc++.h>
using namespace std;

void SPMN(int n , int arr[])
{
    int N , ans , mx = INT_MIN, mn = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        mx = max(mx , arr[i]);
        mn = min(mn , arr[i]);
    }
    N = mx - mn;
    bool indx[N + 1];
    for(int i = 0; i <= N; i++)
    indx[i] = false;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        indx[arr[i]] = true;
    }
    for(int i = 0; i < N ; i++)
    {
        if(indx[i]==false)
        {
            ans = i;
            break;
        }
    }
    cout<<ans;
}
int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    SPMN(n , arr);
    return 0;
}