#include <iostream>
using namespace std;

void MCS(int n , int arr[])
{
    int arrSum = 0 , warp = 0 , temp[n], maxi = INT_MIN;
    for(int i = 0 ; i < n; i++)
    {
        arrSum += arr[i];
        arr[i] *= -1;
    }
    for(int i = 0; i < n; i++)
    {
        warp += arr[i];
        if(warp < 0)
        warp = 0;
        maxi = max(maxi , warp);
    }
    cout << arrSum + maxi;
}
int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    MCS(n , arr);
    return 0;
}