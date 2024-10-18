#include <iostream>

int multiplication(int a, int b){
    if(b == 1)
        return a;
    if(b > 0)
        return a + multiplication(a , b -1);
    if(b < 0)
        return -multiplication(a, -b);
}

int main(){
    std::cout<<multiplication(6, -7);
}