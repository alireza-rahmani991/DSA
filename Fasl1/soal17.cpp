#include <iostream>
#include <string>

int calculateString(std::string expression, int num, int current){
    if(expression.length() == current + 1  && expression[current] == 'x') {
        return num;
    }
    else if(expression[current + 1] == '+'){
        return num + calculateString(expression, num, current + 2);
    }
    else if(expression[current + 1] == '-'){
        return num - calculateString(expression, num, current + 2);
    }
    else if(expression[current + 1] == '*'){
        if(current + 4 > expression.length()){
            return num * num;
        }
        if(expression[current + 3] == '+'){
            return (num * num) + calculateString(expression, num, current + 4);
        }
        else if(expression[current + 3] == '-'){
            return (num * num) - calculateString(expression, num, current + 4);
        }
    }
    else if(expression[current + 1] == '/'){
        if(current + 4 > expression.length()){
            return num / num;
        }
        if(expression[current + 3] == '+'){
            return (num / num) + calculateString(expression, num, current + 4);
        }
        else if(expression[current + 3] == '-'){
            return (num / num) - calculateString(expression, num, current + 4);
        }
    }
}

int main(){

    std::cout<<calculateString("x+x+x*x-x/x", 2,0);
}