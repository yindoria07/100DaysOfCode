#include <iostream>

using namespace std;

int main(){
    int r ;
    int c ;
    char a ;
    cin >> r >> c ;
    int x = r ;
    int y = c ;
    int arr[r] = {0} ;
    int aee[c] = {0} ;
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a ;
            if( a == 'S'){
                arr[i] = 1 ;
                aee[j] = 1 ;
            }
        }
    }
    for(int i=0; i<r; i++){
        x -= arr[i] ;
    }
    for(int i=0; i<c; i++){
        y -= aee[i] ;
    }
    x = x*c + y*(r-x) ;
    cout << x << endl ;
return 0;
}
