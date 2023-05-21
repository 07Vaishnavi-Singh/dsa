#include <iostream>
using namespace std ;


int fibonacci(int n){
    if(n==1){
        return 1 ;
    }
       if(n==0){
        return 0 ;
    }
 int fibo01 = fibonacci(n-1) ;
 int fibo02 = fibonacci(n-2) ;
int finalans = fibo01 + fibo02 ;
    

    return finalans ;
}

int main(){

cout << fibonacci(5)<<endl;
    return 0 ;
}