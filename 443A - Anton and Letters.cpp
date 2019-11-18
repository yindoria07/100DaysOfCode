#include <iostream>

using namespace std;

int main(){
    char a[1000] ;
    char x ;
    int b = 0;
    int result = 0;
    bool flag = false ;
    for(int i =0; i < 1000; i){
        cin >> x ;
        if( x == '{' || x == ',' || x == ' '){
            continue ;
        }
        if( x == '}'){
            break ;
        }
        a[i] = x ;
        i++ ;
        b = i ;
    }
    for(int i=0; i < b; i++){
        flag = false ;
        for(int j = 0; j<i; j++){
            if(a[i] == a[j]){
                flag = true ;
            }
        }
        if(!flag){
            result++ ;
        }
    }
    cout << result << endl ;
return 0;
}
