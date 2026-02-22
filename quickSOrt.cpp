#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>& arr , int st, int end)
{
    int idx = st-1, pivot = arr[end];

    for(int j =st; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(vector<int>& arr, int st, int end)
{
    if(st < end){
       int pivotIdx = partition(arr, st,end);

        quickSort(arr, st, pivotIdx-1);//left part
        quickSort(arr, pivotIdx+1, end);//right part

    }
}

int main()
{
    vector<int> arr = {5,4,2,1,6,3};
    quickSort(arr, 0 , arr.size()-1);

    for(int val: arr){
        cout<< val << " ";
    }
    cout<< endl;
    return 0;
}
