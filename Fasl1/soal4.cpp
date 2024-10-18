#include <iostream>

void toBinary(int number){
    if(number < 2)
        std::cout<<number;
    else{
        toBinary(number / 2);
        std::cout<<number%2;
    }
}

int main(){
    toBinary(52);
}