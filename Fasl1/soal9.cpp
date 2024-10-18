#include <iostream>

int f(int n, int i){
    if(n == i)
        return 1;
    else{
        return 1 + (i+1) * f(n, i + 1);
    }
}

int main(){
    std::cout<<f(3, 1);
}