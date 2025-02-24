#include<iostream>
using namespace std;

class demo{
    int a,b;
    public:
    demo(){
        a=20;
        b=30;
    }
    void putdata(){
        cout<<"a="<<a<<"\n b="<<b<<endl;
    }
};
    
int main(){
    demo aa;
    aa.putdata();
    
    demo bb;
    bb.putdata();
    return 0;
}