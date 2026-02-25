#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>vec ={1,2,3,4,5};
    vec.insert(vec.begin()+1,88);//add new element
    vec.erase(vec.begin());//only start delete
    for(int val:vec){
        cout<<val<< " ";
    }
    //vec.clear();//delete size = 0
    cout<<"\nsize = "<< vec.size()<<endl;
    cout<<*(vec.begin())<<endl;
    cout<<*(vec.end())<<endl;
    //iterator it
    vector<int>::iterator it;
    for(auto it = vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}

