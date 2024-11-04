#include <iostream>

void changeValue(int** arr, int n){

    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < n; j++){
            //a
            if( i == j){
                arr[i][j]++;
            }

            //b
            if(j == n - i - 1){
                arr[i][j]++;
            }

            //c
            if(j > i && j < n - i - 1){
                arr[i][j] += 2;
            }

            //d
            if(j > n - i - 1 && j < i){
                arr[i][j] += 2;
            }

            //e
            if(j < i && j < n - i - 1){
                arr[i][j] += 3;
            }
            //f
            if(j > i && j > n -i - 1){
                arr[i][j] += 3;
            }
        }
    }
}


int main(){
    int n = 6;
    int** arr = new int*[n];
    for(int i =0; i < n ; i++){
        arr[i] = new int[n];
        for(int j = 0; j < n; j++){
            arr[i][j] = 1;
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    changeValue(arr, n);



    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
        delete [] arr[i];
    }
    delete []arr;

}