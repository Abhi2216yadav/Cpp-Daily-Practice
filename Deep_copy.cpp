
#include<iostream>
#include<string>
using namespace std;

class student{
public:

    string name;
    double* cgpaPtr;

    student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;//Initialization of cgpaptr
        *cgpaPtr = cgpa;
    }
    //Or own constructor it`s optional to create
    student(student &obj){

        this->name = obj.name;
        cgpaPtr = new double;//create new cgpa copy;
        *cgpaPtr = *obj.cgpaPtr;
    }
    double getInfo(){
        cout<< "Name : "<< name<<endl;
        cout<< "Cgpa : "<< *cgpaPtr <<endl;
    }

};

int main()
{
    student s1("Abhay" , 9.4);
    s1.getInfo();
    //copy into another class
    student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    s2.name = "Neha";
    s2.getInfo();
    s1.getInfo();
    return 0;
}
