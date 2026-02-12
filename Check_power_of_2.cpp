#include<iostream>
#include<math.h>
using namespace std;

void power(int n){
    if(n <= 0) {
        cout<< "No";
        return;
    }
    if((n & (n-1)) == 0){
        int power = log2(n);
        cout<< "Power of 2 is : "<<power<<endl;
        return;
    }else{
        cout<< "No";
        return;
    }
}

int main(){
    int n ;
    cout<< "Enter number to check power of 2 : ";
    cin>> n;

    power(n);
    return 0;
}