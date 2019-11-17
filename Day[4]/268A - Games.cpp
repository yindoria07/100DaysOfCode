#include <iostream>

using namespace std;

int main(){
    int n ;
    cin >> n ;
    int a[n] ;
    int b[n] ;
    int result = 0;
    for(int i =0 ; i <n; i++){
        cin >> a[i] >> b[i] ;
    }
    for(int i =0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i ==j){
                continue;
            }
            if(a[i] == b[j]){
                result++;
            }
        }
    }
    cout << result << endl ;
return 0;
}
