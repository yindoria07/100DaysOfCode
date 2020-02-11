// Hackerrank Problem - Lonely Interger

#include <iostream>

using namespace std ;

int main(){
    int n ;
    int result ;
    cin >> n ;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    result = arr[0] ;
    for(int i=01; i<n; i++){
        result ^= arr[i] ;
    }
    cout << result ;
    return 0 ;
}