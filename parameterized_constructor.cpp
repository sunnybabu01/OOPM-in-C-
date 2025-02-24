#include<iostream>
using namespace std;

class demo{
    int a,b;
    public:
    demo(int m, int n){
        a=m;
        b=n;
    }
    void putdata()
    {
        cout<<"\n a="<<a<<"\n b="<<b<<endl;
    }

};


int main ()
{
    int x,y;
    cout <<"\n Enter two number:";
    cin>>x>>y;
    demo aa(x,y);
    aa.putdata();
    // getch();
    return 0;
}