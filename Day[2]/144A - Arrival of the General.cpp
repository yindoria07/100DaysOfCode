#include <iostream>

using namespace std;

int main(){
    int n;
    int min_index = 0;
    int max_index = 0;
    int result = 0;
    cin >> n;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    for(int i=1; i<n; i++){
        if(arr[min_index] >= arr[i]){
            min_index = i ;
        }
        if(arr[max_index] < arr[i]){
            max_index = i ;
        }
    }
    if(min_index < max_index){
        result = max_index + (n-min_index-1) -1 ;
    }
    else{
        result = max_index + (n-min_index-1) ;
    }
    cout << result << endl;
return 0;
}
