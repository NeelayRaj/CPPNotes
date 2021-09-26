#include <iostream>
using namespace std;

void RB(int n , int arr[])
{
    int m = 0 , count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > m && arr[i]> arr[i+1])
        count ++;
        m = max(m , arr[i]);
    }
    cout<<"Number of record breaking days are "<<count;
}
int main()
{
    int n;
    cout << "Enter Size of array ";
    cin >> n;
    int arr[n+1];
    arr[n] = 0;
    cout << "Enter Element of array ";
    for(int i = 0 ; i < n ; i++)
    cin >> arr[i];
    if(n == 1)
    {
        cout << "Number of record breaking days is 1";
        return 0;
    }
    RB(n , arr);
    return 0;
}