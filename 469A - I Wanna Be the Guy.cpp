#include <iostream>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int arr[n] = {0} ;
    int a,b ;
    cin >> a ;
    int x ;
    for(int i=0; i<a; i++){
        cin >> x ;
        arr[x-1] = 1 ;
    }
    cin >> b ;
    for(int i = 0 ; i<b; i++){
        cin >> x ;
        arr[x-1] = 1 ;
    }
    for(int i=0; i<n; i++){
        if(arr[i] != 1){
            cout << "Oh, my keyboard!" << endl ;
            return 0 ;
        }
    }
    cout << "I become the guy." << endl ;
return 0 ;
}
