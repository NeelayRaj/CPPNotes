#include <iostream>
using namespace std;

void LAS(int n , int arr[])
{
    int pd = arr[1] - arr[0];
    int curr = 2, j =2 , ans=0;
    while (j < n)
    {
        if(pd == arr [j] - arr[j-1] )
        curr++;
        else{
            curr = 2;
            pd = arr[j] - arr[j-1];
        }
        ans = max(ans , curr);
        j++;
    }
    cout << "Length of Longest Arithimatic Subarray is "<<ans; 
}
int main()
{
    int n;
    cout << "Enter Size of array ";
    cin >> n;
    int arr[n];
    cout<<"Enter Elements of array ";
    for(int i = 0; i < n ; i++)
    cin >> arr[i];
    LAS(n , arr);
    return 0;
}