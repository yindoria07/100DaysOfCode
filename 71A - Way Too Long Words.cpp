#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n ;
    string arr[n] ;
    for(int i =0  ; i < n ; i++){
        cin >> arr[i] ;
    }
    for(int i = 0 ; i < n ; i++){
        string a = arr[i] ;
        if(a.length() > 10){
        int x = n-1 ;
        char start =  a[0];
        char last = a.back() ;
        a = to_string(a.length()-2) ;
        a =  start + a + last ;
        arr[i] = a ;
        }
    }
    for( int i = 0; i < n; i++){
        cout << arr[i] << endl ;
    }
return 0;
}
