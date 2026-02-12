#include<iostream>
using namespace std;

int diagoanlSum(int matrix[][3],int n)
{
    //First method
    int sum =0;
    for(int i =0 ;i<n; i++){
        /*for(int j=0; j<n;j++){// TC = O(n*n)
           if(i == j || j == n - i - 1){
                sum += matrix[i][j];
            }
        }*/
        //second method TC = O(n)
        sum += matrix[i][i];
        if( i != n-i-1){
            sum += matrix[i][n-i-1];
        }
    }
    return sum;
}
int main()
{
    int matrix[3][3] = {{1,2,3},{5,6,79},{8,9,10}};
    int n =3;
    cout<< "Sum of the Diagonal = "<< diagoanlSum(matrix,n) << endl;
    return 0;
}
