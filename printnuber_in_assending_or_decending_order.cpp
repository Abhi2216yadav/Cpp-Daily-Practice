#include<iostream>
using namespace std;
void printNum(int n){
    if(n == 1){
        cout<< n <<" ";
        return ;
    }
    cout<< n << " ";
    printNum(n-1);
    cout<< n << " ";
}
int main()
{
    int n;
    cout<< "Enter number  : ";
    cin>>n;
    cout << "the numbers = ";
    printNum(n);
    return 0;
}
