#include <iostream>

void khayamPascal(int n){
    int** arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[i + 1];
    }
    arr[0][0] = 1;

    for(int i = 1 ; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j <= i ;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
        delete [] arr[i];
    }
    delete []arr;
}


int main(){
    khayamPascal(5);
}