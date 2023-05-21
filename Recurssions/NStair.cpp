#include <iostream>
using namespace std ;

int NStair(int n){

if(n==1 ||n==2){
    return n;
}



int num01 = NStair(n-1);
int num02 = NStair(n-2);

int finalNum = num01 + num02 ;


    return finalNum;
}

int main(){
    cout << NStair(4)<< endl;
    return 0 ;
}