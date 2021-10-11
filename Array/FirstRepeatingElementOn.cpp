#include <bits/stdc++.h>
using namespace std;

void FRE (int n, int arr[])
{
    int N = -1;
    for (int i = 0; i < n; i++)
    N = max (N, arr[i]);
    int idx[N+1];
    for(int i = 0 ; i <= N; i++)
    idx[i] = -1;
    int minIdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
       if(idx[arr[i]] != -1)
       minIdx = min(minIdx , idx[arr[i]]);
       else
       idx[arr[i]] = i;
    }
    if (minIdx == INT_MAX)
    cout << "NO REPEATING ARRAY";
    else
    cout <<"First Repeating element of array is at "<<minIdx+1<<endl;
    //cout << INT_MAX;
}
int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array ";
    for(int i = 0 ; i < n ; i++)
    cin >> arr[i];
    FRE (n , arr) ;
    return 0;
}