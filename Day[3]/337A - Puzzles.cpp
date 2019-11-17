#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> k >> n ;
    int arr[n] ;
    int minimum;
    for(int i = 0; i<n; i++){
        cin >> arr[i] ;
    }
    sort(arr, arr + n);
    minimum = arr[k-1] - arr[0] ;
    for(int i = 0; i<=n-k; i++){
        if(arr[i+k-1] - arr[i] < minimum){
            minimum = arr[i+k-1] - arr[i] ;
        }
    }
    cout << minimum << endl ;
return 0;
}
