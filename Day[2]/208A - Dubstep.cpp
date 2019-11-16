#include <iostream>
#include <string>

using namespace std;

int main(){
    string arr ;
    string x ;
    getline(cin,arr);
    char a ='W' ;
    char b ='U' ;
    char c ='B' ;
    int i = 0;
    while(arr[i] == a && arr[i+1] == b && arr[i+2] == c){
        i = i+3;
    }
    for(; i<arr.length(); i++){
        if(arr[i] == a && arr[i+1] == b && arr[i+2] == c){
            i = i+2;
            x.append(" ");
        }
        else{
            x.push_back(arr[i]);
        }
    }
    cout << x << endl;
return 0;
}
