//Applying recursion to check if a string is a palindrome or not



#include <iostream>
using namespace std ;


bool palindrome(string str, int s, int e){



if(s>=e){
    return true ;
}

char strS , strE ;
strS = str[s];
strE = str[e];

if( strS == strE){

palindrome(str, s+1 , e-1 );

}
if(strS != strE){
    return false ;
}


}

int main(){

bool final = palindrome("abcba", 0 , 4) ;
cout << final<< endl ;

return 0 ;

}
