//Print sum
#include<iostream>
using namespace std;
int printSum(int n){
    if(n == 1){
        return 1;
    }
    return n + printSum(n-1);
}
int main()
{
    int n;
    cout<< "Enter number  : ";
    cin>>n;
    cout << "Sum of the numbers = "<<printSum(n) << endl;
    return 0;
}
