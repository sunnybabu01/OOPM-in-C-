#include<iostream>
using namespace std;

void demo;

{
    int a;
    public:
    void input();
    {
        cout<<"\n Enter a number:";
        cin>>a;
    }
    void operator ++()
    {
        a=a+1;

    }
    void output()
    {
        cout<<"\n value of a="<<a;

    }

};

int main(){
    demo aa;
    aa.input();
    cout<<"value Before Increment:";
    aa.output();

    ++output();

    ++aa;
    cout<<"\n value after Increment:";
    aa.output();


    return 0;
}