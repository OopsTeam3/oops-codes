#include <iostream>

using namespace std;
class A{
protected:
    int x;
public:
    A()
    {
        x=10;
    }
};
class B{
protected:
    int x;
public:
    B()
    {
        x=20;
    }
};
class C:public A,public B
{
public:
    void fun()
    {
        cout<<"A's x is "<<A::x<<endl;
        cout<<"B's x is "<<B::x<<endl;
    }
};
int main()
{
    C c;
    c.fun();
    return 0;
}
