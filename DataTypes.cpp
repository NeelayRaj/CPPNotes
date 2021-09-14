#include <iostream>
using namespace std;

int main()
{
    int a; //declaration
    a=12; //initialisation
    cout<<"size of int "<<sizeof(a)<<endl; //Size of int

    float b;
    b = 4.12;
    cout<<"size of float "<<sizeof(b)<<endl; //size of float

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;//size of char

    bool d;
    cout<<"size of boolean "<<sizeof(d)<<endl; //size of boolean
    unsigned int ui;
    cout<<"size of int "<<sizeof(ui)<<" But it`s unsigned"<<endl; //size of unsigned int

    long long int li;
    cout<<"Size of int "<<sizeof(li)<<" But it is long"<<endl; //size of long int

    short int si;
    cout<<"size of int "<<sizeof(si)<<" But it is short"<<endl; //size of short int
}