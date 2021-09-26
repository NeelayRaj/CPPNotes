#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, maxNumber = INT_MIN , minNumber = INT_MAX ;
    cout << "Enter size of array ";
    cin>>n;
    int arr[n];
    cout<< "Enter Elements of array ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];
    for(int i = 0; i < n; i++)
    {
        if(arr[i]>maxNumber)
        maxNumber = arr[i];
        if(minNumber > arr[i])
        minNumber = arr[i];
    }
    cout<<"Max Number in array is "<<maxNumber<<endl;
    cout<<"Min Number in array is "<<minNumber;
    return 0;
}