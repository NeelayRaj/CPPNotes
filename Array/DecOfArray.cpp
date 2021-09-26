#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size Of Array ";
    cin>>n;
    int array1[n];
    //int array2[4]={12,45,12,10};
    cout<<"Enter elements of array ";
    for(int i = 0 ; i < n; i++)
        cin>>array1[i];
    cout<<"Your array is ";
    for(int i = 0 ; i < n; i++)
        cout<<array1[i]<<" ";
    return 0;
}