#include<iostream>
using namespace std;
int main(){
    int marks;
    cout <<"Enter your marks :";
    cin >> marks;
    if(marks>=90){
        cout<<"Excellent\n";
    }else if(marks>=80 && marks<90){
        cout <<"Average\n";
    }else if(marks>=70 && marks<80){
        cout <<"Bellow average\n";
    }else{
       cout <<"Bellow  \n";
    }
    return 0;
}