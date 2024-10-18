#include <iostream>

using namespace std;

void hanoiTowers2(int n, char S, char A, char D){
    if(n == 1){
        cout << S << " -> " << A << endl;
        cout << A << " -> " << D << endl;
        return;
    }
    hanoiTowers2(n - 1, S, A, D);
    cout << S << " -> " << A << endl;

    hanoiTowers2(n - 1 , D, A, S);
    cout<< A <<" -> "<< D << endl;

    hanoiTowers2(n - 1 , S, A, D);

}

int main(){
    hanoiTowers2(2,'S', 'A', 'D');
}