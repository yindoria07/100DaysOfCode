#include <iostream>

using namespace std;

int main(){
    int n;
    int a,b,c;
    cin >> n;
    int x = 0;
    int y = 0;
    int z = 0;
    while(n--){
        cin >> a >> b >> c ;
        x += a ;
        y += b ;
        z += c ;
    }
    if(x == 0 && y == 0 && z == 0){
        cout << "YES" << endl ;
    }
    else{
        cout << "NO" << endl ;
    }
return 0;
}
