#include <iostream>

using namespace std;
class Student{
    string name;
    int rollno;
public:
    void read()
    {
        cout<<"Enter Name and RollNo ";
        cin>>name;
        cin>>rollno;
    }
};
int main()
{
    Student s;
    s.read();
    return 0;
}
