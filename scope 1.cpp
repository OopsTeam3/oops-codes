#include <iostream>

using namespace std;
int x=10;
int main()
{
    int x=20;
    cout<<"value of local x= "<<x<<endl;
    cout<<"value of global x= "<<::x;
    //cout << "Hello world!" << endl;
    return 0;
}
