#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Hello world";//compile time
    // for(int i=0;i<str.length();i++){
    //     cout<< str[i] <<" ";
    // }
    //use of for each
    for( char ch :str){
        cout<< ch<< " ";
    }
    cout<<endl;
    return 0;
}