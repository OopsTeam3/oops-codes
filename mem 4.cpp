#include <iostream>

using namespace std;
class Employee{
    string name;
    string empcode;
    int salary;
public:
    void read()
    {
        cout<<"Enter employee name and employee code and salary"<<endl;
        cin>>name;
        cin>>empcode;
        cin>>salary;
    }
    void display();
};
 void Employee::display()
    {
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee code: "<<empcode<<endl;
        cout<<"Employee salary: "<<salary<<" per month"<<endl;
    }
int main()
{
    Employee e;
    e.read();
    e.display();
    return 0;
}
