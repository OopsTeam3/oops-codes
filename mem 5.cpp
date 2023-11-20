#include <iostream>

using namespace std;
class Student{
    int marks;
    int rollno;
public:
    void read()
    {
        cout<<"Enter marks and RollNo \n"<<endl;
        cin>>marks;
        cin>>rollno;
    }
    void display();
};
 void Student::display()
    {
        cout<<"marks: "<<marks<<endl;
        cout<<"RollNo: "<<rollno<<endl;
    }
int main()
{
    Student s;
    s.read();
    s.display();
    return 0;
}
