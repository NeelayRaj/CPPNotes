#include <iostream>
using namespace std;

void InsertionSort(int n ,int arr[])
{
    for(int i = 1; i<n ; i++)
    {
        int cur = arr[i];
        int j = i -1;
        while (arr[j]>cur && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = cur;
    }
}
void PrintArray(int n , int arr[])
{
    cout << "Array After Sorting ";
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter size of array ";
    cin>>n;
    int arr[n];
    cout << "Enter Element of array ";
    for(int i = 0 ; i < n; i++)
    cin >> arr[i];
    InsertionSort(n , arr);
    PrintArray(n,arr);
    return 0;
}