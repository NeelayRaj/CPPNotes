#include <iostream>
using namespace std;

void ISort(int n, int arr[])
{
    for(int i = 1; i < n; i++)
    {
        int cur = arr[i];
        int j = i-1;
        while(arr[j] > cur && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = cur;
    }
}
void PSP(int n , int k, int arr[])
{
    int low = 0 , high = n;
    bool result = false;
    while(high > low && high > 0)
    {
        if(arr[high] + arr[low] == k)
        {
            result = true;
            break;
        }
        if (arr[high] + arr[low] > k)
        high--;
        if (arr[high] + arr[low] < k)
        low++;
    } 
    cout <<"\n"<< result;
}
int main()
{
    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    cin >> arr[i];
    ISort(n, arr);
    for(int i = 0 ; i < n; i++)
    cout << arr[i] << " ";
    PSP(n,k,arr);
    return 0;
}