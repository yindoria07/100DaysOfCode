#include <iostream>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    if(n%2 == 0){
        int i = 1 ;
        while(i <= n){
            cout << i+1 << " " << i << " " ;
            i = i + 2 ;
        }
    }
    else 
        cout << -1 ;
    return 0 ;
}