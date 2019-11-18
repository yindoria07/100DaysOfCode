#include <iostream>

using namespace std;

int main(){
    string s ;
    int x = 0;
    string a = "hello" ;
    getline(cin, s) ;
    for(int i =0 ; i < s.length(); i++){
        if(s[i] == a[x]){
            x++;
        }
        else{
            continue ;
        }
        if(x == 5){
            break ;
        }
    }
    if(x == 5){
        cout << "YES" << endl ;
    }
    else{
        cout << "NO" << endl ;
    }
return 0;
}
