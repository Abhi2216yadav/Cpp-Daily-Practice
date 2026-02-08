#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<< "Enter char array :";
    cin.getline(str,100);
    cout << "Your char array is : "<< str<<endl;
    return 0;
}