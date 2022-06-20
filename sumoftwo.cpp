#include<iostream>
using namespace std;
int main()
{
        int a,b,sum;
        float avg;
        cout<<"Enter 2 numbers:";
        cin>>a>>b;
        sum=a+b;
        avg=(float)sum/2;
        cout<<"\nSUM= "<<sum;
        cout<<"\nAVERGE= "<<avg;
        return 0;
}
