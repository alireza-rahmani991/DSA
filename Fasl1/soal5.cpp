#include <iostream>

int max(int arr[], int len, int current){
    if(current + 1 == len){
        return arr[current];
    }
    int temp = max(arr, len, current + 1);
    if(temp > arr[current])
        return temp;
    return arr[current];
}

int main(){
    int a[5] = {1, 2, 80, 100, 200};
    std::cout<< max(a, 5, 0);
}