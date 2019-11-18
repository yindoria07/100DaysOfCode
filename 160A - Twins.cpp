#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    int a = 0 ;
    int result = 0;
    cin >> n ;
    int sum = 0;
    int arr[n] ;
    for(int i =0 ; i < n; i++){
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    sort(arr, arr+n, greater<int>()) ;
    for(int i = 0; i < n ; i++){
        a += arr[i] ;
        result++ ;
        if(a > (sum/2)){
            break ;
        }
    }
    cout << result<< endl ;
    return 0 ;
}
