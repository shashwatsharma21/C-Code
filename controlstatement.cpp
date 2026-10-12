#include <iostream>
using namespace std;
int main()
{
    int balance;
    cout<<"enter your bank balance";
    cin>>balance;
    if(balance>=1000)
    {
        cout<<"you are not charged";
    }
    else
    {
        cout<<"you are charged";
    }
    return 0;
}