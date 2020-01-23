#include<iostream>

using namespace std;

int main()
{
    int a,b,a_win=0,b_win=0,draw=0;
    cin>>a>>b;
    for(int i=1;i<7;i++)
    {
        if(abs(a-i) < abs(b-i))
            a_win++;
        else if(abs(a-i) > abs(b-i))
            b_win++ ;
        else 
            draw++ ;
    }
    cout << a_win << " " << draw << " " << b_win ;
    return 0;
}