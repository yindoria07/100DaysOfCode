#include <iostream>

using namespace std;

int main(){
    int n;
    int oss = 0;
    cin >> n ;
    char arr[n][n] ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j] ;
        }
    }
    for(int i=0; i<n; i++){
        oss = 0;
        for(int j=0; j<n; j++){
            if(arr[i-1][j] == 'o' && i-1 >= 0){
                oss++ ;
            }
            if(arr[i+1][j] == 'o' && i+1 < n){
                oss++ ;
            }
            if(arr[i][j-1] == 'o' && j-1 >= 0){
                oss++ ;
            }
            if(arr[i][j+1] == 'o' && j+1 < n){
                oss++ ;
            }
            if(oss%2 != 0){
                cout << "NO" << endl ;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
return 0;
}
