#include<iostream>
using namespace std;
int a=30; //global variable
int main()
{
    int a=10;//locla variable
    cout<<a<<endl;
    cout<<::a<<endl;
    return 0;
}