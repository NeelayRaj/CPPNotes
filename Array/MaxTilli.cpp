#include <iostream>
using namespace std;

void MaxTillI (int n , int arr[])
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cout << "Max Of number till "<<i<<" is ";
        mx = max(mx , arr[i]);
        cout << mx << endl;
    }
    
}
int main()
{
    int n;
    cout << "Enter size of array ";
    cin>>n;
    int arr[n];
    cout << "Enter Element of array ";
    for (int i = 0; i < n; i++)
    cin >> arr[i];
    MaxTillI(n,arr);
    return 0;
}