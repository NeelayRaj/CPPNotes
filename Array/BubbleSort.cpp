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
    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n-1; j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    cout << "Array after sorting ";
    for(int i = 0; i < n; i++)
    cout << arr[i]<<" ";
    return 0;
}