#include<iostream>
using namespace std;
int main()
{
    int row, col,i,j,val;

    printf("Enter number of rows and col : ");
    scanf("%d%d",&row,&col);

    int matrix[row][col];

    printf("Enter values : ");
    for(i=0 ;i< row;i++){
        for(j = 0 ; j< col ;j++ ){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nMatrix is \n");
    for(i=0 ;i< row;i++){
        for(j = 0 ; j< col ;j++ ){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter number to search : ");
    scanf("%d",&val);
    for(i=0 ;i< row;i++){
        for(j = 0 ; j< col ;j++ ){
           if(matrix[i][j] == val){
            cout <<"Found at idx = ("<<i<<"," << j<<")"<<endl;
            break;
           }
        }
    }

    return 0;
}
