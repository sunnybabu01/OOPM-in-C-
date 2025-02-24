#include<iostream>
using namespace std;

class demo
{
    int a;
    public :
    void getdata()
    {
        cout<<"\n Enter a number:";
        cin>>a;
    }
    void putdata()
    {
        cout<<"\n value of a="<<a;

    }
    demo operator+(demo bb)
    {
        demo cc;
        cc.a=a+bb.a;
        return cc;
    }
};


    int main(){
        demo aa, bb, cc;
        aa.getdata();
        bb.getdata();
        cc=aa+bb;
        
        aa.putdata();
        bb.putdata();
        cc.putdata();

      return 0;  
    }
