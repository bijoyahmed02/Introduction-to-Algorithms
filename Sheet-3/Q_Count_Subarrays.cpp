#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        long long int ans = N; 
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (A[j] >= A[j - 1]) {
                    ans++; 
                } else break;
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}
