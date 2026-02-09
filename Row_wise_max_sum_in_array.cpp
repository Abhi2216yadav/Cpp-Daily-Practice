#include<iostream>
using namespace std;
int main()
{
    int row , col, i ,j;
    cout<< "Enter row and col of the matrix : ";
    cin>> row >> col;
    int matrix[row][col];
    cout << "Enter value of the matrix : ";
    for( i=0 ;i<row ; i++){
        for(j = 0; j<col ; j++){
            cin>> matrix[i][j];
        }
    }

    cout << "Matrix is : "<<endl;
    for( i=0 ;i<row ; i++){
        for(j = 0; j<col ; j++){
            cout<< matrix[i][j]<< " ";
        }
        cout<<endl;
    }

    int ans = 0;
    for( i=0 ;i<row ; i++){
            int sum =0;
        for(j = 0; j<col ; j++){
            sum += matrix[i][j];
        }
        cout<< i+1<< " Row sum = "<<sum<<endl;
       ans = max(sum , ans);
    }

    cout << "\nMax Row sum is = " << ans<<endl;
    return 0;
}

