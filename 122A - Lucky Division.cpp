#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = false ;
    int arr[14] = {4,7,44,47,74,77,444,447,474,477,744,747,777,774} ;
    for(int i = 0; i<14; i++){
        if(n%arr[i] == 0){
            flag = true;
            break ;
        }
    }
    if(flag){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }

return 0;
}
