#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>& arr, int st, int mid, int end)
{
    vector<int> temp;
    int Invcount = 0;

    int i =st, j = mid+1;

    while( i <= mid && j<= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            Invcount++;
            j++;
        }

    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
    return Invcount;
}
int  mergeSort(vector<int>& arr, int st, int end)
{
    if(st < end){
        int mid = st+(end-st)/2;
        int leftInvCount = mergeSort(arr, st, mid); // left part
        int rigthInvcount = mergeSort(arr, mid+1, end);// right part

       int Incurr =  merge(arr, st, mid, end);
       return leftInvCount + rigthInvcount + Incurr;
    }
    return 0;
}
int main()
{
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int Invcout = mergeSort( arr, 0 , arr.size()-1);

    cout<< "Sorted Array : ";
    for(int val : arr){
        cout<< val << " ";
    }
     cout<< endl;
     cout<< "Inversion count = " << Invcout << endl;
    return 0;
}
