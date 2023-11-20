#include <iostream>

using namespace std;
class Test{
    static int x;
public:
    void func(int x)
    {
        cout<<"Static x is "<<Test::x<<endl;
        cout<<"Local x is "<<x<<endl;
    }
};
int Test::x=1;
int main()
{
    //cout << "Hello world!" << endl;
    Test t;
    int x=2;
    t.func(x);
    return 0;
}
