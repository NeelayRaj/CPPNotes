#include <iostream>
using namespace std;

void SumOfSubarray (int n, int arr[])
{
    cout << "Sum of subarrays are given below"<<endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of array ";
    for (int i = 0; i < n; i++)
    cin>>arr[i];
    SumOfSubarray(n , arr);
    return 0;
}