#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "racecar";
    string str1 = str;
    int st =0, end = str.length()-1;
    while(st < end){
        swap(str[st++],str[end--]);
    }
    if(str == str1){
        cout<< "Str is palindrome "<<endl;
    }else
        cout<<"str is not palindrome" <<endl;
    return 0;
}
