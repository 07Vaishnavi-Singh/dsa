//reverse an array 


#include <iostream>
using namespace std ;


int printing(int arr[]){

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0 ;
}







int reverse(int arr[], int s, int e ){

if(s>=e){
  
   printing(arr);
return 0;
}

int t;
t= arr[s];
arr[s]= arr[e];
arr[e]= t ;

reverse(arr, s+1, e-1 );


}

int main(){
int arr[5] = {1,2,3,4,5};
int s= 0;
int e= 4;

    reverse(arr, s,e);

    
}