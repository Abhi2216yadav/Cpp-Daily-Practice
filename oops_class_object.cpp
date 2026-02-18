#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
    double salary;
public:

    string name;
    string dept;

    string subject;
    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }

};

int main()
{
    teacher t1;

    t1.name = "Abhay Yadav";
    t1.subject = "Maths";
    t1.dept = "CSE";
    t1.setSalary(600000);

    cout << "Name : "<< t1.name << endl;
    cout << "Subject : "<< t1.subject << endl;
    cout << "Department : "<< t1.dept << endl;
    //We can access salary using methods
    cout << "salary : "<< t1.getSalary() << endl;
    return 0;
}
