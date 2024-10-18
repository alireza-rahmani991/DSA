#include <iostream>


void hanoiTowers(int n, char S, char A, char D){
    if(n == 1){
        std::cout<<S<<"->"<<D<<std::endl;
        return;
    }

    hanoiTowers(n - 1, S, D, A);
    std::cout<<S<<"->"<<D<<std::endl;
    hanoiTowers(n - 1, A, S, D);

}

int main(){
    hanoiTowers(3, 's', 'a', 'd');
}