#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n)
{
    if(n == 1 || n == 0){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);

}
int main()
{
    int n;
    cout<< "Enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    cout<< "Enter array elements : ";
    for(int i =0 ;i<n ; i++){
        cin>>arr[i];
    }
    cout<< isSorted(arr,n)<<endl;
    return 0;
}
