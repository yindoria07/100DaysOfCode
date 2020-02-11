// Hackerrank Problem - Left Rotation

#include <iostream>

using namespace std ;

int main(){
    int n, d ;
    cin >> n >> d ;
    d = d%n ;
    int arr[n] ;
    for(int i=-d; i<n-d; i++){
        if(i < 0){
            cin >> arr[i+n] ;
        }
        else{
            cin >> arr[i] ;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}