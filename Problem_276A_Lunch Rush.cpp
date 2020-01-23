#include <iostream>

using namespace std ;

int main(){
    int n, k ;
    cin >> n >> k ;
    int max_joy ;
    int arr[n] ; // joy ot that resturant
    int abb[n] ; // time required to have lunch on that resturant
    for(int i=0; i<n; i++){
        cin >> arr[i] >> abb[i] ;
    }
    max_joy = k > abb[0] ? arr[0] : arr[0]-(abb[0]-k) ;
    for(int i=1; i<n; i++){
        int current_joy = k > abb[i] ? arr[i] : arr[i]-(abb[i]-k) ;
        if(current_joy > max_joy){
            max_joy = current_joy ;
        }
    }
    cout << max_joy << endl ;
    return 0 ;
}