// HackerRank Problem - Reataurant
#include <iostream>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int l, b ;
        cin >> l >> b ;
        int x = l, y = b ;
        int result = 0 ;
        if(b > l){
            b = (l+b) - (l = b) ;
        }
        int hcf = 1 ;
        while(b != 0){
            int temp = l ;
            l = b ;
            b = temp%b ; 
        }
        hcf = l > 1 ? l : 1 ;
        result = (x*y)/(hcf*hcf) ;
        cout << result << "\n" ;
    }
    return 0 ;
}