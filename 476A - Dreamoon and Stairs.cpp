#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> n >> m ;
    for(int i = n/2; i >= 0; i--){
        if((n-i)%m == 0){
            cout << i + (n-2*i) << endl ;
            return 0;
        }
    }
    cout << -1 << endl;
return 0;
}
