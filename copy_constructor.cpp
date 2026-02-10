#include<iostream>
#include<string>
using namespace std;

class student{
public:

    string name;
    double cgpa;

    student(string name,double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    //Or own constructor it`s optional to create
    student(student &obj){

        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }
    void getInfo(){
        cout<< "Name : "<< name<<endl;
        cout<< "Cgpa : "<< cgpa <<endl;
    }

};

int main()
{
    student s1("Abhay" , 9.4);
    //copy into another class
    student s2(s1);
    s2.cgpa = 9.2;
    s2.name = "Neha";
    s1.getInfo();
    s2.getInfo();
    s1.getInfo();
    return 0;
}
