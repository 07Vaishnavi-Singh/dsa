#include <iostream>
using namespace std ;

int sum(int n){
    if(n==1){
        return 1 ;
    }
    int functionCall= sum(n-1);
    int smallEq = functionCall + n;
    

    return smallEq ;
}





int main(){
cout<<sum(5);
return  0;

}