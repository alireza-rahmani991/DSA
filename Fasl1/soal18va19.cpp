#include <iostream>
#include <string>

bool duplicate(std::string str){
    if(str.length() == 0){
        return true;
    }
    if(str.length() == 1){
        return false;
    }
    std::string newStr = str.substr(0, str.length() / 2);
    newStr.erase(newStr.begin());
    if(duplicate(newStr) && str.substr(0, str.length() / 2) == str.substr(str.length() / 2, str.length())){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    std::cout<<duplicate("ALILIALILI")<<std::endl;
    std::cout<<duplicate("HTMMTMMHTMMTMM");

}