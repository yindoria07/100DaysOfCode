#include <iostream>
 
using namespace std ;
 
int min(int a, int b){
    if(a > b){
        return b ;
    }
    return a ;
}
int  main(){
    int n ; //number of friends
    int k, l ; // no. of bottles and  milliliters per bottle.
    int c, d ; // no. of lemons and slices .
    int p, nl, np ; // salt , ml per toast, salt per toast;
    cin >> n >> k >> l >> c >> d >> p >> nl >>np ;
    int total_ml = k*l ;
    int slices = c*d ; 
    int result = min(total_ml/nl,min(slices, p/np)) ;
    result = result/n ;
    cout << result << endl ;
    return 0 ;
}