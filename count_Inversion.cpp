#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int n = arr.size();
    //Brute force approach TC : O(n^2);
    int Invcount = 0;
    for(int i  =0; i< n; i++){
        for(int j =i+1; j< n; j++){
            if(arr[i] > arr[j]){
                Invcount++;
            }
        }
    }
    cout << "Invert count = " << Invcount <<endl;
    return 0;
}
