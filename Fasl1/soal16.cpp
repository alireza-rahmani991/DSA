#include <iostream>
#include <string>

using namespace std;

void subsets(int arr[], int len, int current, string subset){
    if(current == len){
        cout<<"["<<subset<<"]"<<endl;
        return;
    }
    subsets(arr, len, current + 1, subset);
    subsets(arr, len, current + 1, subset + to_string(arr[current]) + ", ");
}

int main(){
    int n = 3;
    int a[3] = {1, 2, 80,};
    subsets(a, n, 0, "");
}