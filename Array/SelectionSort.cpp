#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter element of array ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr [j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Array after sorting is ";
    for(int i = 0; i < n; i++)
    cout << arr[i]<<" ";
    return 0;
}