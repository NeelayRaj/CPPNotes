#include <iostream>
using namespace std;

void KA(int n , int arr[])
{
    int curr = 0 , mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        curr += arr[i];
        if (curr < 0)
        curr = 0;
        mx = max(mx , curr);
    }
    cout << mx;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    cin >> arr[i];
    KA(n , arr);
    return 0;
}