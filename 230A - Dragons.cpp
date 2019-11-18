#include <iostream>

using namespace std;

int main(){
    int s, n, a;
    cin >> s >> n ;
    int arr[n] ;
    int aee[n] ;
    for(int i=0; i < n; i++){
        cin >> arr[i] >> aee[i] ;
    }
    for(int i = 0; i<n-1; i++){
        int m = arr[i] ;
        a = i;
        for(int j = i+1; j<n; j++){
            if( m > arr[j]){
                m = arr[j] ;
                a = j ;
            }
        }
        int temp = arr[i] ;
        arr[i] = arr[a] ;
        arr[a] = temp ;
        temp = aee[i] ;
        aee[i] = aee[a] ;
        aee[a] = temp ;
    }
    for(int i=0; i<n ; i++){
        if( s > arr[i]){
            s = s + aee[i] ;
        }
        else{
            cout << "NO" << endl ;
            return 0 ;
        }
    }
    cout << "YES" << endl ;
return 0;
}
