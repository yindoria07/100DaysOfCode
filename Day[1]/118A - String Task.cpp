#include <iostream>
#include <vector>

using namespace std;

int main(){
    string str;
    vector<char> v ;
    getline(cin , str) ;
    for(int i =0 ; i < str.length() ; i++){
        if(str[i] < 97){
            str[i] = str[i] + 32 ;
        }
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u' || str[i] == 'y'){
            continue ;
        }
        else{
            v.push_back(str[i]) ;
        }
    }
    int a = v.size() ;
    int c = 0 ;
    char arr[2*a] ;
    for( int i =0 ; i < a ;i++){
        arr[c] =  '.' ;
        c++ ;
        arr[c] = v[i] ;
        c++ ;
    }
    for(int i = 0; i < 2*a;i++){
        cout << arr[i]  ;
    }
return 0;
}
