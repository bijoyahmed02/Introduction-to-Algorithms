#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<string> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    int X, Y;
    cin >> X >> Y;
    int row = X - 1;
    int col = Y - 1;
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    bool allX = true;

    for (int k = 0; k < 8; k++) {
        int ni = row + dx[k];
        int nj = col + dy[k];
        if (ni >= 0 && ni < N && nj >= 0 && nj < M) {
            if (A[ni][nj] != 'x') {
                allX = false;
                break;
            }
        }
    }

    cout << (allX ? "yes" : "no") << "\n";
    return 0;
}
