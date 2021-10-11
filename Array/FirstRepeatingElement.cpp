#include <iostream>
using namespace std;

int FRE(int n, int arr[])     //Time Complexity O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i]==arr[j])
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of array ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    int ans = FRE(n , arr) + 1;
    if (ans == -1)
    cout << "NO REPEATING ARRAY";
    else
    cout <<"First Repeating element of array is "<<ans;
    return 0;
}