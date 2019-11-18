#include <iostream>

using namespace std;

int main(){
    int n,d ;
    int sum = 0;
    int noj = 0;
    cin >> n >> d ;
    int arr[n] ;
    for(int i = 0; i < n; i++){
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    if( d-sum < (n-1)*10){
        cout << -1 << endl ;
    }
    else{
        noj = (d-sum)/5 ;
        cout << noj << endl;
    }
return 0;
}
