#include <iostream>
using namespace std;

int SWGS(int n, int s , int arr[])
{
    int i = 0 , j = 0, st =-1 , en = -1, sum = 0;
    while (j < n && arr[j]+sum <= s)
    {
        sum += arr[j];
        j++;
    }
    if(sum == s)
    {
        cout << i+1 <<" "<< j;
        return 0;
    }
    while(j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st = ++i;
            en = ++j;
            break;
        }
        else{
            cout << "Array not found ";
            return 0;
        }
        j++;
    }
    cout << st << " " << en;
    return 0;
}
int main()
{
    int n , s;
    cin >> n >> s;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    SWGS(n , s , arr);
    return 0;
}