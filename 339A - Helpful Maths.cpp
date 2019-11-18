#include <iostream>

using namespace std;

int main(){
    string s ;
    getline(cin, s) ;
    char arr[s.length()] ;
    int a = 0 ;
    int b = 0 ;
    int c = 0 ;
    for(int i = 0; i<s.length(); i = i+2){
        if(s[i] == '1')
            a++ ;
        else if(s[i] == '2')
            b++ ;
        else
            c++ ;
    }
    for(int i =0 ; i < s.length(); i++){
        if(a > 0){
            arr[i] = '1' ;
            a-- ;
        }
        else if( b > 0){
            arr[i] = '2' ;
            b-- ;
        }
        else{
            arr[i] = '3' ;
            c-- ;
        }
        i++ ;
        if(a+b+c != 0)
            arr[i] = '+' ;
    }
    for(int i = 0 ; i < s.length(); i++){
        cout << arr[i] ;
    }
return 0;
}
