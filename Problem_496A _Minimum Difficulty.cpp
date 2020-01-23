#include <iostream>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int result = 0 ;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    int diff2 = arr[2] - arr[0] ;
    for(int i=0; i<n-1; i++){
        if(result < arr[i+1] - arr[i]){
            result = arr[i+1] - arr[i] ;
        }
    }
    for(int i=1; i<n-1; i++){
        if(diff2 > arr[i+1] - arr[i-1]){
            diff2 = arr[i+1] - arr[i-1] ;
        }
    }
    result = result > diff2 ? result : diff2 ;
    cout << result ;
    return 0 ;
}