#include <iostream>
using namespace std ;

int factorial(int n){

if(n==1 || n==0 ){
    return 1;
}

int fact= factorial(n-1);
int factorialFinal = fact * n ;

    return factorialFinal ;
}

int main(){

cout << factorial(5)<< endl ;
    return 0;
}