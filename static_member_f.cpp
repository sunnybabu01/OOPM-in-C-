#include <iostream>
using namespace std;

class demo
{
    int x;
    static int y;

public:
    void getdata(int a)
    {
        a = x;
        y = y + 1;
    }
    void putdata()
    {
        cout << "\n x=" << x << "\t y=" << y;
    }
    static void abc()
    {
        cout << "\n y=" << y;
    }
};
int demo::y;

int main()
{
    demo aa;
    aa.getdata(10);
    aa.putdata();

    demo::abc();
    return 0;
}