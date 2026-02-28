#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        // subarray length
        for (int len = 1; len <= N; len++) {
            // start index
            for (int i = 0; i + len - 1 < N; i++) {
                int mx = A[i];
                for (int j = i; j < i + len; j++)
                    mx = max(mx, A[j]);

                cout << mx << " ";
            }
        }
        cout << "\n";
    }
}
