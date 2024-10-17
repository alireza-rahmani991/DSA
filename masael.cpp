#include <iostream>
#include <string>
#include <vector>

using namespace std;

int divide(int, int);                       //tamrin 1
double average(int[], int, int);            //tamrin 2
void revArr(int[], int, int);               //tamrin 3
void toBinary(int);                         //tamrin 4
int max(int[], int, int);                   //tamrin 5
int multiplication(int, int);               //tamrin 6
int greatestCommonDivisor(int , int );      //tamrin 7
void truthTable(int, int[]);                //tamrin 8
int soal9(int, int);                        //tamrin 9
double soal10(int, int);                    //tamrin 10
void soal11(int, int, int, int);            //tamrin 11
void soal12(int ,int , int , int , vector<vector<int>>&);   //tamrin 12
void hanoiTowers(int , char , char , char );//tamrin 13
void hanoiTowers2(int , char , char , char );//tamrin 14
void subsets(int[], int, int, string);       //tamrin 16
bool duplicate(string);                      //tamrin 18&19

int ack(int m, int n){
    if(n < 0 || m < 0) return 0;
    else if(m == 0) return n + 1;
    else if(n == 0 ) return ack(m -1 , 1);
    else return ack(m -1 , ack(m, n -1));
}

int main(){
    int n = 5;
    int a[5] = {1, 2, 80, 100, 200};
    //cout<<divide(10, 2);

    //cout<<average(a, 5, 0);
//    revArr(a, 0, 4);
//    for(int i = 0; i < 5; i++){
//        cout<<a[i]<<" ";
//    }
//    toBinary(0);
    //cout<<multiplication(71, -3);
    //cout<<soal10(4, 1);
//    soal11(20, 0, 0, 0);
//    hanoiTowers2(2, 'S', 'A', 'D');
    //subsets(a, n, 0, "");
//    cout<<max(a, n, 0);
    //cout<<greatestCommonDivisor(12, 4);
    //cout<<duplicate("SBBSBB");
    // vector<vector<int>> vec = {};
    // soal12(20, 0, 0, 0, vec);
    cout<<ack(3, 2);
    return 0;
}

int divide(int num, int dividend){
    if(num < dividend)
        return 0;
    else
        return 1 + divide(num - dividend, dividend);
}

double average(int arr[], int n, int curr){
    if(curr == n - 1){
        return arr[curr];
    }
    if(curr == 0){
        return (arr[curr] + average(arr, n, curr + 1)) / n;
    }

    return (arr[curr] + average(arr, n, curr+1));
}



void revArr(int arr[], int start, int end){
    if(start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    revArr(arr, start + 1, end - 1);

}

void toBinary(int number){
    if(number < 2)
        cout<<number;
    else{
        toBinary(number / 2);
        cout<<number%2;
    }
}

int max(int arr[], int len, int current){
    if(current + 1 == len){
        return arr[current];
    }
    int temp = max(arr, len, current + 1);
    if(temp > arr[current])
        return temp;
    return arr[current];
}

int multiplication(int a, int b){
    if(b == 1)
        return a;
    if(b > 0)
        return a + multiplication(a , b -1);
    if(b < 0)
        return -multiplication(a, -b);
}

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

void truthTable(int n, int table[]){
    if(n == 1){

    }
}

int soal9(int n, int i){
    if(n == i)
        return 1;
    else{
        return 1 + (i+1) * soal9(n, i + 1);
    }
}

double soal10(int n, int i){
    if(n == i){
        return 1;
    }
    else{
        return 1 + (double) 1 / (i + 1) * soal10(n, i + 1);
    }
}


void soal11(int n, int ten, int five, int two){
    if(n == 0)
        cout<<"ten: "<<ten<<"     five:"<<five<<"      two:"<<two<<endl;
    else if(n < 2)
        return;
    else {
        soal11(n - 2, ten, five, two + 1);
        soal11(n - 5, ten, five + 1 , two );
        soal11(n - 10, ten + 1, five, two);
    }
}

void soal12(int n,int ten, int five, int two, vector<vector<int>>& possibilities){

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
        soal12(n - 2, ten, five, two + 1, possibilities);
        soal12(n - 5, ten, five + 1 , two, possibilities );
        soal12(n - 10, ten + 1, five, two, possibilities);
    }
}

void hanoiTowers(int n, char S, char A, char D){
    if(n == 1){
        cout<<S<<"->"<<D<<endl;
        return;
    }

    hanoiTowers(n - 1, S, D, A);
    cout<<S<<"->"<<D<<endl;
    hanoiTowers(n - 1, A, S, D);

}

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


void subsets(int arr[], int len, int current, string subset){
    if(current == len){
        cout<<"["<<subset<<"]"<<endl;
        return;
    }
    subsets(arr, len, current + 1, subset);
    subsets(arr, len, current + 1, subset + to_string(arr[current]) + ", ");
}

bool duplicate(string str){
    if(str.length() == 0){
        return true;
    }
    if(str.length() == 1){
        return false;
    }
    string newStr = str.substr(0, str.length() / 2);
    newStr.erase(newStr.begin());
    if(duplicate(newStr) && str.substr(0, str.length() / 2) == str.substr(str.length() / 2, str.length())){
        return true;
    }
    else{
        return false;
    }
}

