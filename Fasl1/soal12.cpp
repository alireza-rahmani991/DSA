#include <iostream>
#include <vector>
using namespace std;

void f(int n,int ten, int five, int two, vector<vector<int>>& possibilities){

    if(n == 0) {
        for (int i = 0; i < possibilities.size(); i++) {
            if (possibilities[i][0] == ten && possibilities[i][1] == five && possibilities[i][2] == two) {
                return;
            }
        }
        possibilities.push_back({ten, five, two});
        cout << "ten: " << ten << "     five:" << five << "      two:" << two << endl;
    }
    else if(n < 2)
        return;
    else {
        f(n - 2, ten, five, two + 1, possibilities);
        f(n - 5, ten, five + 1 , two, possibilities );
        f(n - 10, ten + 1, five, two, possibilities);
    }
}

int main(){
    vector<vector<int>> vec;
    f(20, 0, 0, 0, vec);
}