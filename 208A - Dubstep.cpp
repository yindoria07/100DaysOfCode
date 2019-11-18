#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    vector <char> a ;
    int i = 0 ;
    getline(cin, s);
    while(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
        i = i+3 ;
    }
    bool flag = true ;
    for(; i<s.length(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i = i+2 ;
            if(flag){
                a.push_back(' ');
            }
            flag = false;
        }
        else{
            a.push_back(s[i]);
            flag = true;
        }
    }
    for(int i = 0; i<a.size(); i++){
        cout << a[i] ;
    }

return 0;
}
