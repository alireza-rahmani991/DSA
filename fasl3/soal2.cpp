#include <iostream>

int combination(int n, int r){
    if(r > n){
        return 0;
    }
    int* arr = new int[r + 1];
    arr[0] = 1;
    for(int i = 1; i <= r; i++){
        
        arr[i] =(arr[i - 1] * (n - r + i)) / i;
    }
    int res = arr[r];
    delete [] arr;
    return res;
}


int main(){
    std::cout<<combination(8, 3);
}