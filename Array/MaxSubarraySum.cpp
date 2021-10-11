#include <iostream>
using namespace std;
void MSS(int n , int arr[])
{
    int mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            mx = max(mx , sum);
        }
    }
    cout << mx;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];
    MSS(n , arr);
    return 0;
}