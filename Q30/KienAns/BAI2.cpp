#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;   
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        int a = i % 10;              
        int bP = i * i;                   
        int b = bP % 10; 

        if (a == b) {
            cout << i <<endl;
        }
    }

    cout << endl;
    return 0;
}
