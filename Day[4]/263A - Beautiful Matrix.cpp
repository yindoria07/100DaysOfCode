#include <iostream>

using namespace std;

int main(){
    int arr[5][5] ;
    int x = 0;
    int y = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j] ;
            if(arr[i][j] != 0){
                x = i ;
                y = j ;
            }
        }
    }
    x = abs(x-2) ;
    y = abs(y-2) ;
    cout << x+y ;
return 0;
}
