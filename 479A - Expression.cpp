#include <iostream>

using namespace std;

int main(){
    int a, b, c ;
    cin >> a >> b >> c ;
    if(b != 1){
        if( a > c){
            if( c != 1){
                b = b *c ;
            }
            else{
                b = b + c ;
            }
                b = b * a ;
        }
        else{
            if( a != 1){
                b = b * a ;
                b = b * c ;
            }
            else{
                b = b + a ;
                if( c != 1){
                    b = b * c ;
                }
                else{
                    b = b + c ;
                }
            }
        }
    }
    else{
        if( a > c){
            b = b + c ;
            b = b * a ;
        }
        else{
            b = b + a ;
            if( c != 1){
                b = b * c ;
            }
            else{
                b = b + c ;
            }
        }
    }

    cout << b << endl ;
return 0;
}
