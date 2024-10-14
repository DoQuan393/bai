#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    const int n = 100005;
    int A[n];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int dem = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if (A[i] + A[j] == A[k] || 
                    A[i] + A[k] == A[j] || 
                    A[j] + A[k] == A[i]) {
                    count++;
                }
            }
        }
    }
    
    cout << dem<< endl;   
    return 0;
}
