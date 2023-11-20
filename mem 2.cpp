#include <iostream>

using namespace std;
class Student{
    string name;
    int rollno;
public:
    void read()
    {
        cout<<"Enter Name and RollNo"<<endl;
        cin>>name;
        cin>>rollno;
    }
    void display();
};
 void Student::display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"RollNo: "<<rollno<<endl;
    }
int main()
{
    Student s;
    s.read();
    s.display();
    return 0;
}
