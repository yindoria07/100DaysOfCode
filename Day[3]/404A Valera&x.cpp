#include <iostream>

using namespace std ;

int main(){
    int n ;
    char a, b ;
    cin >> n ;
    char arr[n][n] ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j] ;
        }
    }
    a = arr[0][0] ;
    b = arr[0][1] ;
    if(a == b){
        cout << "NO" << endl ;
        return 0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( i==j || i == n-j-1){
                    if(arr[i][j] != a){
                        cout << "NO" << endl ;
                        return 0 ;
                    }
            }
            else if(arr[i][j] != b){
                    cout << "NO" << endl ;
                    return 0 ;
                }
            }
        }
    cout << "YES" << endl ;
return 0;
}
