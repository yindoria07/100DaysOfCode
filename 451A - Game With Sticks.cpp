#include <iostream>

using namespace std;

int main(){
    int n,m ;
    cin >> n >> m ;
    if(m < n){
        n = m ;
    }
    if(n%2 == 0){
        cout << "Malvika" << endl ;
    }
    else{
        cout << "Akshat" << endl ;
    }
return 0;
}
