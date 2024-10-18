#include <iostream>

void f(int n, int ten, int five, int two){
    if(n == 0)
        std::cout<<"ten: "<<ten<<"     five:"<<five<<"      two:"<<two<<std::endl;
    else if(n < 2)
        return;
    else {
        f(n - 2, ten, five, two + 1);
        f(n - 5, ten, five + 1 , two );
        f(n - 10, ten + 1, five, two);
    }
}


int main(){
    f(10, 0, 0, 0);
}