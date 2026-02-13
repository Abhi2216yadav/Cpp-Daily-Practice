#include<iostream>
using namespace std;
int main(){
    int n,i,fac=1;
     cout <<"Enter no :";
    cin >> n;
    for(i=1;i<=n;i++){
    fac=fac*i;

    }
    cout << "fac is ="<< fac <<endl;
    return 0;
}