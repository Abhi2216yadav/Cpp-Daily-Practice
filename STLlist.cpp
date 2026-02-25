#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<int>l = {1,2,3};
    push_front(4);
    push_back(1);
    push_back(2);
    for(int val:l){
        cout<<val<< " ";
    }
    cout<<endl;
    return 0;
}
