#include <iostream>

int combination(int n, int r){
    int* arr = new int[r + 1];
    arr[0] = 1;
    for(int i = 1; i <= r; i++){
        
        arr[i] =(arr[i - 1] * (n - r + i)) / i;
    }
    return arr[r];
}


int main(){
    std::cout<<combination(8, 3);
}