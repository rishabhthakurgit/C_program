#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr1[9];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[k]=arr[i][j];
            k++;
        }
    }
    // convert the 1D array
    for(int i=0;i<9;i++){
        printf("%d ", arr1[i]);
    }
}