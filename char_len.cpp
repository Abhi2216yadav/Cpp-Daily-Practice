#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<< "Enter char array :";
    cin.getline(str,100);
    int len =0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    cout<< "Length of str :"<<len<<endl;
    return 0;
}