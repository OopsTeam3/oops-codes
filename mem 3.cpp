#include <iostream>

using namespace std;
class Add{
private:
    int a,b;
public:
  void read()
  {
      cout<<"Enter a and b"<<endl;
      cin>>a;
      cin>>b;
  }
  void sum();
};
void Add::sum()
{
    cout<<"The sum is: "<<a+b<<endl;
}
int main()
{
    Add a;
    a.read();
    a.sum();
    return 0;
}
