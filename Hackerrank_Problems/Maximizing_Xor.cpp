// Hackerrank Problem - Maximizing Xor

#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
    int max = 0 ;
    int a = 0 ;
    for(int i=l; i<=r; i++){
        for(int j = i; j<=r; j++){
            a = i^j ;
            max = a>max? a : max ;
        }
    }
    return max ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}