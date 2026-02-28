#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N == 1) {
        cout << 0 << "\n";
        return 0;
    }
    if (N == 2) {
        cout << 1 << "\n";
        return 0;
    }
    long long int a = 0; 
    long long int b = 1; 
    long long int c;

    for (int i = 3; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << "\n";
    return 0;
}
