#include<iostream>
using namespace std;
int main(){
    int i,j,n ;
    int num=1;
      cout <<"Enter no :";
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j>0 ;j--){
            cout << num <<"  ";
            num++;
          }
        cout << endl;
    }
    return 0;
}