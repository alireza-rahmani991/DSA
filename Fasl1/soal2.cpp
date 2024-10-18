#include <iostream>

double average(int arr[], int n, int curr){
    if(curr == n - 1){
        return arr[curr];
    }
    if(curr == 0){
        return (arr[curr] + average(arr, n, curr + 1)) / n;
    }

    return (arr[curr] + average(arr, n, curr+1));
}


int main() {
    int a[5] = {1, 2, 80, 100, 200};
    std::cout<<average(a, 5, 0);
}