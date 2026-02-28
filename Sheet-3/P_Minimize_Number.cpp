#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) 
       cin >> A[i];
    int oper = INT_MAX;

    for (int i = 0; i < N; i++) {
        int count = 0;
        long long x = A[i];
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }
        oper = min(oper,count);
    }

    cout <<oper<< "\n";
    return 0;
}
