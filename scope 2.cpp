#include <iostream>

using namespace std;
class A{
public:
    void fun();
};
void A::fun()
{
    cout<<"Function call"<<endl;
}
int main()
{
    //cout << "Hello world!" << endl;
    A a;
    a.fun();
    return 0;
}
