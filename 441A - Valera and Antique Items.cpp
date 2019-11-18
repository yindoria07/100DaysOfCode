
#include <iostream>

using namespace std;

int main(){
    int n, v ;
    cin >> n >> v ;
    int a = 0 ;
    int arr[n] ;
    int x = 0;
    int price = 0 ;
    bool flag = false ;
    int aee[n] = {0} ;
    for(int i =0; i<n; i++){
        flag = false ;
        cin >> a ;
        for(int j =0; j < a; j++){
            cin >> price ;
            if(flag == true)
                continue ;
            if( price < v){
                aee[x] = i+1 ;
                x = x + 1 ;
                flag = true ;
            }
        }
    }
    cout << x << endl ;
    for(int i =0; i < x ; i++){
        cout << aee[i] << " " ;
    }
return 0;
}
