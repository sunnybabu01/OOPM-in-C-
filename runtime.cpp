#include <iostream>
#include<string>
using namespace std;

class parent
{
public:
    void getInfo()
    {
        cout << "This a Parent Class" << endl;
    }
};
class chaild : public parent
{
public:
    void getInfo()
    {
        cout << "This a Child class" << endl;
    }
};

int main()
{
    chaild cl;
    cl.getInfo();
    return 0;
}
