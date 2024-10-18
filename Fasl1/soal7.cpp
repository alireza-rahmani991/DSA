#include <iostream>

int greatestCommonDivisor(int num1, int num2){
    if(num1 == 0)
        return num2;
    if(num2 == 0)
        return num1;
    if(num1 == num2)
        return num1;
    if(num1 > num2)
        return greatestCommonDivisor(num1 - num2, num2);


    return greatestCommonDivisor(num1, num2 - num1);
}


int main(){
    std::cout<<greatestCommonDivisor(20, 14);
}