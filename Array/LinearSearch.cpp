#include<iostream>
using namespace std;

int LinearSearch(int n , int arr[], int s)
{
    for(int i = 0 ; i < n ; i++)
    {   
        if(arr[i] == s)
        return i;
    }
    return -1;
}
int main()
{
    int n,s;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout<<"Enter Elements of array ";
    for(int i = 0 ; i < n; i++)
    cin>>arr[i];
    cout << "Enter Value to search in array ";
    cin>>s;
    cout<<s<<" is present at position "<<LinearSearch(n, arr ,s);
    return 0; 
}