#include <iostream>
using namespace std;

int BinSearch(int n ,int arr[], int s)
{
    if (n/2 <= s)
    {
        for(int i = n/2; i < n; i++)
        {
            if(arr[i]==s)
            return i;
        }
    }else
    {
        for (int i = 0; i < n/2; i++)
        {
            if (arr[i]==s)
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,s;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout<<"Enter Elements of array in Ascending Order ";
    for(int i = 0 ; i < n; i++)
    cin>>arr[i];
    cout << "Enter Value to search in array ";
    cin>>s;
    cout<<s<<" is present at position "<<BinSearch(n, arr ,s);
    return 0; 
}