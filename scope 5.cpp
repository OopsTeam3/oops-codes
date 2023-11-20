#include <iostream>

using namespace std;
class out{
public:
    int x=10;
    class in{
        public:
        static int x;
    };
};
int out::in::x=5;
int main()
{
    out A;
    out::in B;
    cout<<A.x<<endl;
    cout<<B.x<<endl;
    return 0;
}
