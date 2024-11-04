#include <iostream>
//ba tavajoh be nabood class bignumber inja run nmishe
bigNumber fact(int n){
    bigNumber res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    return res;

}

//age gharar be estefade az array bashe mishe nevesht
bigNumber fact2(int n){
    bigNumber res = new bigNumber[n];
    res[0] = 1;
    for(int i = 1; i <= n; i++){
        res[i] = res[i - 1] * i + 1;
    }
    return res[n - 1];
}