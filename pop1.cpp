#include<iostream>
#define max_size 10
using namespace std;
void pop(int n);

void display();

int top=-1, stack[max_size];

int main()
{
    pop(10);
    pop(20);
    pop(30);
    pop(40);
    pop(50);
    pop(60);
    pop(70);
    pop(80);
    pop(90);
    pop(100);
    display();
    return 0; }
    void pop (int n)
    {
        if ( top==-1 )
         cout<<"\nUnderflow";
         else
         {
             cout<<"\nPopped = "<<stack[ top ];
             top--;
         }
    }
    void display ()
    {
        for (int i=0; i<=top;i++)
        cout<<stack[i]<<" ";
    
    }