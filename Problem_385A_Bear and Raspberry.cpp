#include <iostream>

using namespace std ;

int main(){
    int n, c ;
    int result = 0 ;
    cin >> n >> c ;
    int max_diff = 0 ;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    for(int i=0; i<n-1; i++){
        if(max_diff < arr[i]-arr[i+1]){
            max_diff = arr[i] - arr[i+1] ;
        }
    }
    if( max_diff >= c){
        result = max_diff-c ;
    }
    cout << result << endl ;
    return 0 ;
}