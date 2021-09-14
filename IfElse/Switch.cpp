#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter character between a to e ";
    cin>>c;
    switch(c)
    {
        case 'a' : 
        cout<<"1st Alphabet";
        break;
        case 'b' :
        cout<<"Second Alphabet";
        break;
        case 'c' :
        cout<<"Third Alphabet";
        break;
        case 'd' :
        cout<<"Fourth Alphabet";
        break;
        case 'e' :
        cout<<"Fifth Alphabet";
        break;
        default :
        cout << "Out Of Range";
    }
    return 0;
}