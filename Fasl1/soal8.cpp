#include <iostream>
#include <vector>
void truthTable(int n, std::vector<int>& table){
    if(n == 0){
        for(int i = 0; i < table.size(); i++ ){
            std::cout<<table[i]<<"  ";
        }
        std::cout<<std::endl;
        return;
    }

    table.push_back(0);
    truthTable(n - 1, table);
    table.pop_back();

    table.push_back(1);
    truthTable(n - 1, table);
    table.pop_back();

}

int main(){
    std::vector<int> table = {};
    truthTable(3, table);
}