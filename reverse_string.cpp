#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Hello world";//compile time
    int st =0 ,end = str.length()-1;
    while(st < end){
        swap(str[st++],str[end--]);
    }
    cout<< str<<endl;
    return 0;
}