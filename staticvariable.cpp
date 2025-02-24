#include<iostream>
#include<string>
using namespace std;

// void fun(){
   
//     static int x=0;
//     cout<<"x:"<<x<<endl;
//     x++;
// };
class A{
    public:
    int x;
    void incx(){
        x=x+1;

    }
};
int main(){
    A obj;
    cout<<obj.x<<endl;
    obj.incx();
    cout<<obj.x<<endl;
    // fun();
    // fun();
    // fun();
    return 0;
}
