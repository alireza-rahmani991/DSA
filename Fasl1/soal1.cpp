#include <iostream>

int divide(int num, int dividend){
    if(num < dividend)
        return 0;
    else
        return 1 + divide(num - dividend, dividend);
}

int main(){
    std::cout<< divide(30, 6);
}