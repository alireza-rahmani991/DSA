#include <iostream>

void revArr(int arr[], int start, int end){
    if(start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    revArr(arr, start + 1, end - 1);

}

int main(){
    int n = 5;
    int a[5] = {1, 2, 80, 100, 200};
    revArr(a, 0, n - 1);
    for(int i = 0; i < 5; i++){
        std::cout<<a[i]<<" ";
    }
}