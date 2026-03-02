#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout <<"Enter char : ";
    cin >>ch;
    if(ch>=65 && ch<=90)
    {
        cout <<"Uppercase\n";
    }else{
        cout <<"Lowercase\n";
    }
    return 0;
}