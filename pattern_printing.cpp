 #include<iostream>
using namespace std;
int main(){
    int i,j,n ;
      cout <<"Enter no :";
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j>0 ;j--){
            cout << j <<"  ";
          }
        cout << endl;
    }
    return 0;
}