#include<iostream>
using namespace std;

class set
{
        int m, n;
       public:
                void input(void);
                void display(void);
                int largest(void);
};

void set :: input(void)
{
        cout<<"Input two numbers to check which is larger : ";
        cin>>m>>n;
}

int set :: largest(void)
{
        if(m>n)
               return m;
        else
                return n;
}

void set :: display(void)
{
        cout<<"\nLargest value= "<< largest() <<endl;
}

int main()
{
        set A;
        A.input();
        A.display();
        return 0;
}
