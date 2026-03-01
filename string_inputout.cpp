#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Hello world";//compile time
    cout<< str <<endl;
    string str1;
    cout<< "Enter string :";
    getline(cin,str1);
    cout<< str1 <<endl;
    return 0;
}